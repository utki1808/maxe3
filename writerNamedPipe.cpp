#include<iostream>
#include<sys/stat.h>
#include<fcntl.h>
#include<string.h>
using namespace std;
int main(){
	char buffer[25]="Welcome",fifo;
	fifo=mkfifo("mypipe",0777);
	if(fifo==0)
		cout<<"File Created Successfully!\n";
	else if (fifo<0)
		cout<<"File Exists\n";
	else 
		cout<<"Error\n";
	fifo=open("mypipe",O_WRONLY);
	write(fifo,buffer,strlen(buffer));
	cout<<"Writing:"<<buffer<<endl;
	close(fifo);
	return 0;
}

