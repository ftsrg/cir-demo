TIMEOUT ?= 60s

VCLOUD  = ./benchexec/contrib/vcloud-benchmark.py
FLAGS   = --vcloudPriority HIGH --tryLessMemory \
          --overlay-dir=/home/ \
          --read-only-dir=/ \
          --vcloudClientHeap 4000 --no-ivy-cache \
          --vcloudAdditionalFiles tools \
          --timelimit $(TIMEOUT)

ESBMC_DIR      = ./tools/bin/esbmc-svcomp/esbmc-kind
CBMC_DIR       = ./tools/bin/cbmc-svcomp/cbmc
THETA_DIR      = ./tools/bin/theta-svcomp/Theta
CPACHECKER_DIR = ./tools/bin/cpachecker/CPAchecker-4.2.2-unix

# Post-processing
# BenchExec writes results to results/ and names files:
#   <benchmarkname>.<timestamp>.results.<runndef>.<tasksname>.xml.bz2
# Since our rundefinition and tasks blocks share the same name the suffix is
# e.g.  esbmc-eval.esbmc-eval  (name appears twice).
RESULTS_DIR   ?= results
NORM_DIR       = $(RESULTS_DIR)/normalized
TABLES_DIR    ?= tables
TABLE_GEN      = PYTHONPATH=./benchexec ./benchexec/bin/table-generator

.PHONY: all esbmc cbmc theta cpachecker normalize tables

# Full pipeline: tool runs (parallel) → normalize → tables.
# Run as: make all -j4   (the four tool invocations are independent).
all: tables

# ── Tool runs ──────────────────────────────────────────────────────────────────
# These four targets are independent and run in parallel under -j4.

esbmc:
	$(VCLOUD) $(FLAGS) --tool-directory $(ESBMC_DIR) xml/esbmc.xml

cbmc:
	$(VCLOUD) $(FLAGS) --tool-directory $(CBMC_DIR) xml/cbmc.xml

theta:
	$(VCLOUD) $(FLAGS) --tool-directory $(THETA_DIR) xml/theta.xml

cpachecker:
	$(VCLOUD) $(FLAGS) --tool-directory $(CPACHECKER_DIR) xml/cpachecker.xml

# ── Post-processing ────────────────────────────────────────────────────────────

# Strip ../sources/<variant>/ from run names so each benchmark matches across
# source sets when table-generator joins columns.
normalize: esbmc cbmc theta cpachecker
	python3 normalize-results.py $(RESULTS_DIR)/*.xml.bz2
	cp $(RESULTS_DIR)/*.logfiles.zip $(NORM_DIR)/


# ── Tables ─────────────────────────────────────────────────────────────────────
#   esbmc-all      – all three ESBMC configs side by side
#   cbmc-all       – all three CBMC configs side by side
#   esbmc-vs-theta – ESBMC baseline vs Theta on mapped inputs
#   esbmc-vs-cpa   – ESBMC baseline vs CPAchecker on mapped inputs
tables: normalize
	mkdir -p $(TABLES_DIR)
	$(TABLE_GEN) -o $(TABLES_DIR)/esbmc-all \
	    $(NORM_DIR)/esbmc.*.results.esbmc-eval.esbmc-eval.xml.bz2 \
	    $(NORM_DIR)/esbmc.*.results.esbmc-eval-mapped.esbmc-eval-mapped.xml.bz2 \
	    $(NORM_DIR)/esbmc.*.results.esbmc-eval-mapped-nostd.esbmc-eval-mapped-nostd.xml.bz2
	$(TABLE_GEN) -o $(TABLES_DIR)/cbmc-all \
	    $(NORM_DIR)/cbmc.*.results.esbmc-eval.esbmc-eval.xml.bz2 \
	    $(NORM_DIR)/cbmc.*.results.esbmc-eval-mapped.esbmc-eval-mapped.xml.bz2 \
	    $(NORM_DIR)/cbmc.*.results.esbmc-eval-mapped-nostd.esbmc-eval-mapped-nostd.xml.bz2
	$(TABLE_GEN) -o $(TABLES_DIR)/esbmc-vs-theta \
	    $(NORM_DIR)/esbmc.*.results.esbmc-eval.esbmc-eval.xml.bz2 \
	    $(NORM_DIR)/theta.*.results.esbmc-eval-mapped.esbmc-eval-mapped.xml.bz2 \
	    $(NORM_DIR)/theta.*.results.esbmc-eval-mapped-nostd.esbmc-eval-mapped-nostd.xml.bz2
	$(TABLE_GEN) -o $(TABLES_DIR)/esbmc-vs-cpa \
	    $(NORM_DIR)/esbmc.*.results.esbmc-eval.esbmc-eval.xml.bz2 \
	    $(NORM_DIR)/cpachecker.*.results.esbmc-eval-mapped.esbmc-eval-mapped.xml.bz2 \
	    $(NORM_DIR)/cpachecker.*.results.esbmc-eval-mapped-nostd.esbmc-eval-mapped-nostd.xml.bz2
