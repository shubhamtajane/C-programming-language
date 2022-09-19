#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
 char Fname[20];
 int Fd=0;
 
 printf("Enter File Name to open\n");
 scanf("%s",Fname);
 
 Fd=open(Fname,O_RDONLY);
 
 if(Fd==-1)
 {
   printf("Unable to open File");
   return -1;
 }
 
 printf("File is Succesfully Open\n");
 
 return 0;
}