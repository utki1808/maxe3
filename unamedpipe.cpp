#include<iostream>
#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<sys/wait.h>
using namespace std;

int main()
{
		pid_t ch_pid;
		char buffer[100];
		int fd[2];
		pipe(fd);
		ch_pid=fork();
		
		if(ch_pid==0)
		{
			close(fd[1]);
			read(fd[0],buffer,sizeof(buffer));
			cout<<"Msg Received:\n";
			cout<<buffer<<endl;
		}
		else
		{
			close(fd[0]);
			cout<<"Enter Msg to be passed : \n";
			gets(buffer);
			write(fd[1],buffer,sizeof(buffer));
		}
}
