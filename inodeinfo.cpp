	#include<iostream>
	#include<stdio.h>	//for perror function
	#include<stdlib.h>
	#include<sys/stat.h>	//for stat structure
	#include<sys/types.h>	//for file information
	using namespace std;
	int main (int argc, char* argv[]){
		struct stat file_stats;		//to create object of stat structure
		for(int i=1;i<argc;i++){
			int returnValue=stat(argv[i],&file_stats);	//for file system status
			if(returnValue<0)
				perror("ERROR");
			else{
				cout<<"\nINFO OF FILE:"<<argv[i]<<"\n\n";
				cout<<"Type of File:";
				if(S_ISREG(file_stats.st_mode)){	//to check type of file
					cout<<"Regular File\n";
				}
				else if(S_ISBLK(file_stats.st_mode)){
					cout<<"Block File\n";
				}
				else if(S_ISCHR(file_stats.st_mode)){
					cout<<"Character File\n";
				}
				else if(S_ISFIFO(file_stats.st_mode)){
					cout<<"FIFO File\n";
				}
				else if(S_ISLNK(file_stats.st_mode)){
					cout<<"Symbolic Link File\n";
				} 	
				else 
					cout<<"Directory File\n";
				cout<<"Device No:"<<file_stats.st_dev<<endl;	
				//print file information
				cout<<"Inode No:"<<file_stats.st_ino<<endl;
				cout<<"Mode:"<<file_stats.st_mode<<endl;
				cout<<"Number of hard links:"<<file_stats.st_nlink<<endl;
				cout<<"UID:"<<file_stats.st_uid<<endl;
				cout<<"GID:"<<file_stats.st_gid<<endl;
				cout<<"Size of file:"<<file_stats.st_size<<endl;
				cout<<"Block Size:"<<file_stats.st_blksize<<endl;
				cout<<"Number of blocks:"<<file_stats.st_blocks<<endl;
				cout<<"Time of last Access:"<<ctime(&file_stats.st_atime);
				//ctime to convert time in human readable form
				cout<<"Time of last Modification:"<<ctime(&file_stats.st_mtime);
				cout<<"Time of last Status Change:"<<ctime(&file_stats.st_ctime);
			}
		}
	}
