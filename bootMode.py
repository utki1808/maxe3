#Boot Mode Code:

import os
if (os.path.exists("/sys/firmware/efi")):
	print "UEFI MODE"
else:
	print "BIOS MODE"

#------OUTPUT-------
#student@PUN:~$ python bootMode.py 
#BIOS MODE
#student@PUN:~$ 

