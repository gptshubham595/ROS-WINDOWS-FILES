#!c:\opt\python27amd64\python.exe
# EASY-INSTALL-ENTRY-SCRIPT: 'wstool==0.1.17','console_scripts','wstool'
__requires__ = 'wstool==0.1.17'
import re
import sys
from pkg_resources import load_entry_point

if __name__ == '__main__':
    sys.argv[0] = re.sub(r'(-script\.pyw?|\.exe)?$', '', sys.argv[0])
    sys.exit(
        load_entry_point('wstool==0.1.17', 'console_scripts', 'wstool')()
    )
