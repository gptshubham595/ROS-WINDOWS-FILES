#!c:\opt\python27amd64\python.exe
# EASY-INSTALL-ENTRY-SCRIPT: 'rospkg==1.1.9','console_scripts','rosversion'
__requires__ = 'rospkg==1.1.9'
import re
import sys
from pkg_resources import load_entry_point

if __name__ == '__main__':
    sys.argv[0] = re.sub(r'(-script\.pyw?|\.exe)?$', '', sys.argv[0])
    sys.exit(
        load_entry_point('rospkg==1.1.9', 'console_scripts', 'rosversion')()
    )
