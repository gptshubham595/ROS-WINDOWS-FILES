#!c:\opt\python27amd64\python.exe
# EASY-INSTALL-ENTRY-SCRIPT: 'catkin-pkg==0.4.13','console_scripts','catkin_package_version'
__requires__ = 'catkin-pkg==0.4.13'
import re
import sys
from pkg_resources import load_entry_point

if __name__ == '__main__':
    sys.argv[0] = re.sub(r'(-script\.pyw?|\.exe)?$', '', sys.argv[0])
    sys.exit(
        load_entry_point('catkin-pkg==0.4.13', 'console_scripts', 'catkin_package_version')()
    )
