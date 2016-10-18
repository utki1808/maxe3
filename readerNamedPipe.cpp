#include<iostream>
#include<sys/stat.h>
#include<fcntl.h>
#include<string.h>
using namespace std;
int main(){
	char buffer[25],fifo;
	fifo=open("mypipe",O_RDONLY);
	read(fifo,buffer,25);
	cout<<"Data Read From Buffer:"<<buffer<<endl;
	close(fifo);
	unlink("mypipe");
	return 0;
}

