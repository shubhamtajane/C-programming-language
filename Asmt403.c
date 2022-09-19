#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
 char Fname[20];
 int Fd=0;
 char Data[100];
 int iRet=0;
 
 printf("Enter File Name to open the File\n");
 scanf("%s",Fname);
 

 
 Fd=open(Fname,O_RDWR);
 
 if(Fd==-1)
 {
   printf("Unable to Open File\n");
   return -1;
 }
 
 printf("File is Successfully Open\n");
 
 iRet=read(Fd,Data,10);
 
 printf("%d bytessuccesfully Read\n",iRet);
 
 printf("Data From File is : %s",Data);
 return 0;
}