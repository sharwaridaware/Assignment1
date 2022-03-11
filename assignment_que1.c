/*
File operations program that demonstrates copying of data from input file and write into output file, until reaches end of file data.
*/

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

void main()
{
	
	char Rbuff[1000];
	
	int fd1 = open("input.txt", O_RDONLY, 777);
	int fd2 = open("output.txt",O_RDWR, 777); 
	int len;
	
	//reading from input.txt
	read(fd1, Rbuff, 200);
	
	printf("data read = %s\n",Rbuff);
	
	//writing to output.txt
	len = write(fd2, Rbuff, 200);
	
	printf("data written = %d \n", len);
	
	
	
	close(fd2);
	close(fd1);
	
}
