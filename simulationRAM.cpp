#include<iostream>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
using namespace std;
int main(){
	system("echo File System Disk Space Usage:");
	system("df -h");

	system("mkdir /mnt/ramDrive");
	system("echo Contents in /mnt:");
	system("ls /mnt");

	system("echo Mounting Device ramDrive...");
	system("mount -t tmpfs -o size=500M tmpfs /mnt/ramDrive");
	system("df -h");
	system("echo Device ramDrive Mounted!!!");

	system("cp /home/shubham/myCalculator /mnt/ramDrive");
	system("echo Contents in ramdrive:");
	system("ls /mnt/ramDrive");

	system("echo Executing program...");
	system("/mnt/ramDrive/myCalculator");
	system("echo Program Execution Finished");
	system("df -h");

	system("echo Umounting ramDrive...");
	system("rm /mnt/ramDrive/myCalculator");
	system("umount /mnt/ramDrive");
	system("rmdir /mnt/ramDrive");
	system("df -h");
	system("echo RAM Drive Unmounted!!!");
return 0;
}
	
