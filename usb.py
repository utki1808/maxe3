import os
name=raw_input("Enter Name of USB Drive:")
os.chdir("/media/"+name+"/")
while 1:
	print "1.List\n2.Make directory\n3.Delete Directory\n4.Create file",
	ch=int(raw_input("\n5.Delete file\n6.Change Directory\n7.Exit\nEnter Choice:"))
	if(ch==1):
		os.system("ls")
	if(ch==2):
		dir_nm=raw_input("Enter Directory Name:")
		os.system("mkdir "+dir_nm)
		print "***Directory Created***"
	if(ch==3):
		dir_nm=raw_input("Enter Directory Name:")
		os.system("rmdir "+dir_nm)
		print "***Directory Deleted***"
	if(ch==4):
		f=raw_input("Enter File Name:")
		os.system("touch "+f)
		print "***File Created***"
	if(ch==5):
		f=raw_input("Enter File Name:")
		os.system("rm "+f)
		print "***File Deleted***"
	if(ch==6):
		a=raw_input("Enter Directory Name:")
		os.chdir(a)
		print "***Directory Changed to:",a
	if(ch==7):
		exit()
