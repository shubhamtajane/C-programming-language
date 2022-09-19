#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>

int main()
{
 char Fname[20];
 int Fd=0;
 
 printf("Enter File name to open\n");
 scanf("%s",Fname);
 
 Fd=open(Fname,O_RDONLY);
 
 printf("File is Successfully open\n");
 
 close(Fd);
 return 0;
}