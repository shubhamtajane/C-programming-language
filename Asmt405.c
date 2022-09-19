#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main()
{
 char Fname[20];
 char Data[100];
 int fd=0;
 
 printf("Enter File Name\n");
 scanf("%s",Fname);
 
 fd=open(Fname,O_RDWR);
 if(fd==-1)
 {
   printf("Unable to open File");
   return -1;
 }
 
 printf("Enter String that you want to write\n");
 scanf(" %[^'\n']s",Data);
 
 write(fd,Data,strlen(Data));
 
 printf("File is Successfully created\n");
 
 close(fd);
 return 0;
}