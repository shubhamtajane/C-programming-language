#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
 char Fname[20];
 int Fd=0;
 
 printf("Enter File Name that you want to create\n");
 scanf("%s",Fname);
 
 Fd=creat(Fname,0777);
 
 if(Fd==-1)
 {
   printf("Unable to create file\n");
   return -1;
 }
 
 printf("File is Successfully Created\n");
 return 0;
}