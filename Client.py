import socket
import sys

s=socket.socket()
s.connect(('172.16.132.89',8391))
list1=s.recv(1024)
print "Files Available on Server:"
print list1
opt=raw_input()
s.send(""+opt)
file_nm=raw_input("Destination file name: ")
f1=open(file_nm,"w")
str1=s.recv(8)
while str1:
	
	f1.write(str1)
	str1=s.recv(8)
f1.close()
print "File From Server 172.16.132.89 is copied to File",file_nm
s.close()

