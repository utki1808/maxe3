import os,time,stat

fileName = raw_input("Enter File Name:")
fD = os.open(fileName, os.O_RDWR)

x=os.fstat(fD)
if(stat.S_ISREG(x.st_mode)):
	print "Type: Regular File"
elif(stat.S_ISFIFO(x.st_mode)):
	print "Type: FIFO file"
elif(stat.S_ISLNK(x.st_mode)):
	print "Type: Symbolic File"
elif(stat.S_ISCHR(x.st_mode)):
	print "Type: Character File"
elif(stat.S_ISBLK(x.st_mode)):
	print "Type: Block File"

print "Device No:",x.st_dev
print "Inode No:",x.st_ino
print "Mode:",x.st_mode
print "Number of hard links:",x.st_nlink
print "UID:",x.st_uid
print "GID:",x.st_gid
print "Size of file:",x.st_size
print "Block Size:",x.st_blksize
print "Number of Blocks:",x.st_blocks
print "Time of last Access:",time.ctime(x.st_atime)
print "Time of last Modification:",time.ctime(x.st_mtime)
print "Time of last Status Change:",time.ctime(x.st_ctime)
