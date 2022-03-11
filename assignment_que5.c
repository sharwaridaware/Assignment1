/*
Program Returning “ls -l ” kind of structure of information from an existing file or
opened file.
*/

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>

char init[] = "\0";

int main(void)
{
     int fd = creat("file.txt", 777);			
     
     if(fd < 0)
     {
            perror("Creation error");
	    exit(1);
     }
     
     if(lseek(fd,4094,SEEK_SET) < 0)			
     {
	    perror("Positioning error");
            exit(3);
     }
     
     if(write(fd,init,sizeof(init)) < 0)		
     {
	    perror("Writing error");
            exit(2);
     }
     
     return 0;
}    		
