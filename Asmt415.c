#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

void DisplayN(char Fname[],int iSize)
{
  int Fd=0;
  char Data[1024];
  int iRet=0;
  int i=0;
  
  
  Fd=open(Fname,O_RDWR);
   if(Fd==-1)
   {
     printf("Unable to open File\n");
	 return;
  }
  
  while(iRet=read(Fd,Data,sizeof(Data)));
  {
    for(i=0;i<iSize;i++)
	{
      printf("%c",Data[i]);
	  
	}
  }
 }
 
int main()
{
 char Fname[20];
 int iValue=0;
 
 printf("Enter File Name\n");
 scanf("%s",Fname);
 
 printf("Enter the Number of Characters that you want to Display\n");
 scanf("%d",&iValue);
 
 DisplayN(Fname,iValue);
 
 return 0;
}