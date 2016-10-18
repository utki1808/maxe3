import socket
import sys
print "--------------------SERVER STARTED------------------------"
s=socket.socket()
addr=socket.gethostname()
s.bind(('172.16.132.89',8391))
s.listen(5)
while True:
	c,address=s.accept()
	print "connection established with the client",address
	c.send("\n1.a.txt\n2.b.txt\n3.c.txt\nOption")
	str1=c.recv(2)
	if(str1=='1'):
		f1=open("a.txt",'r')
	elif(str1=='2'):
		f1=open("b.txt",'r')
	elif(str1=='3'):
		f1=open("c.txt",'r')
	print "sending Data to Server....."
	str2=f1.read(8)
	while str2:

		c.send(str2)
		str2=f1.read(8)
	print "the Client",address,"served"
	c.close()	
	
s.close()
		
