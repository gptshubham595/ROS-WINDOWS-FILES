#!c:\opt\python27amd64\python.exe
# EASY-INSTALL-ENTRY-SCRIPT: 'rosdep==0.15.2','console_scripts','rosdep-source'
__requires__ = 'rosdep==0.15.2'
import re
import sys
from pkg_resources import load_entry_point

if __name__ == '__main__':
    sys.argv[0] = re.sub(r'(-script\.pyw?|\.exe)?$', '', sys.argv[0])
    sys.exit(
        load_entry_point('rosdep==0.15.2', 'console_scripts', 'rosdep-source')()
    )
