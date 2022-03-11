/*
Program implementing all file operations(open/creat/write/read/lseek/close)
*/

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

void main()
{
	int fd1, fd2;
	char rbuff[100];
	int len;
	
	fd1 = creat("new.txt", 0777);		
		
	fd2 = open("data.txt", O_RDONLY, 777);		
	
	len = read(fd2, rbuff, 60);				
	printf("Data in data.txt -\n%s\n",rbuff);	
	
	len = write(fd1, rbuff, 60);			
	
	printf("Data written to new.txt\n");
	
	lseek(fd2, 5, SEEK_SET);			
	read(fd2, rbuff, 50);
	printf("After lseek -- data read = %s\n",rbuff);
	
	close(fd2);
	close(fd1);
}
