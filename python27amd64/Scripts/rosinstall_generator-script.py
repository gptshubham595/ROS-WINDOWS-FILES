#!c:\opt\python27amd64\python.exe
# EASY-INSTALL-ENTRY-SCRIPT: 'rosinstall-generator==0.1.16','console_scripts','rosinstall_generator'
__requires__ = 'rosinstall-generator==0.1.16'
import re
import sys
from pkg_resources import load_entry_point

if __name__ == '__main__':
    sys.argv[0] = re.sub(r'(-script\.pyw?|\.exe)?$', '', sys.argv[0])
    sys.exit(
        load_entry_point('rosinstall-generator==0.1.16', 'console_scripts', 'rosinstall_generator')()
    )
