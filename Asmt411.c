#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int CountCapital(char Fname[])
{
  int iCnt=0,i=0,iRet=0;
  int Fd=0;
  char Data[1024];
  
  Fd=open(Fname,O_RDWR);
  
  if(Fd==-1)
  {
   printf("Unable to open File");
   return -1;
  }
  
  while((iRet=read(Fd,Data,sizeof(Data)))!=0)
  {
    for(i=0;i<iRet;i++)
	{
	  if((Data[i]>='A')&&(Data[i]<='Z'))
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
 
 printf("Enter File Name to open\n");
 scanf("%s",Fname);
 
 iRet=CountCapital(Fname);
 
 printf("Number of Capital Letters are %d\n",iRet);

 return 0;
}