#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int CountChar(char Fname[],char ch)
{
  int Fd=0;
  int i=0;
  int iCnt=0;
  char Data[1024];
  int iRet=0;
  
  Fd=open(Fname,O_RDWR);
  if(Fd==-1)
  {
   printf("Unable to open File\n");
   return -1;
  }
  printf("File is Successfully open\n");
  
  while(iRet=read(Fd,Data,sizeof(Data)))
  {
    for(i=0;i<iRet;i++)
  {
    if(Data[i]==ch)
	{
	  iCnt++;
    }
}
  }

 return iCnt;
  close(Fd);
}

int main()
{
 char Fname[20];
 int iRet=0;
 char cValue;
 
 printf("Enter File Name\n");
 scanf("%s",Fname);
 
 printf("Enter the Character\n");
  scanf(" %c",&cValue);
 
 iRet=CountChar(Fname,cValue);
 
 printf("Number Of Letters are : %d\n",iRet);
 return 0;
}