/*
 * Copyright 2026 LLVM Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "crc_macros.h"
#include <stdint.h>

#define GENPOLY 4129

static uint16_t CRCTable[256];

static void crc_init(void) { CRCINIT_BE(uint16_t, CRCTable, GENPOLY); }

// This table-lookup should be equivalent to the code emitted when optimizing
// CRC with HashRecognize. This function itself will be untouched by
// HashRecognize.
static uint16_t crc_table(uint16_t crc_initval, uint32_t data) {
  uint16_t crc = crc_initval;
  CRCTABLE_BE(uint16_t, CRCTable, crc_init, crc, data);
  return crc;
}

static uint16_t crc_loop(uint16_t crc_initval, uint32_t data) {
  uint16_t crc = crc_initval;

  // This loop will be optimized by HashRecognize.
  CRCLOOP_BE(uint16_t, GENPOLY, crc, data);
  return crc;
}

int main() {
  int res = 0;
  VERIFY_RESULT(crc_table, crc_loop, res);
  return res;
}
