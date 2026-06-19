#
# Source: https://doi.org/10.5281/zenodo.14824495
#
# This work is licensed under Creative Commons Attribution 4.0 International.
# To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/

from pathlib import Path

for path in Path('./').rglob('test.desc'):
    print(path)
    f = open(path,'r')
    lines = f.readlines()[:-1]
    lines.append("<item_10_mode>KNOWNBUG</item_10_mode>" + "\n")
    lines.append("</test-case>")
    f.close()
    f = open(path,'w')
    f.writelines(lines)
