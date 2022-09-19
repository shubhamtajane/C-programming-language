#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int CountSmall(char Fname[])
{
  int iCnt=0,i=0,iRet=0;
  int Fd=0;
  char Data[1024];
  
  Fd=open(Fname,O_RDWR);
  if(Fd==-1)
  {
    printf("unable to open File\n");
	return -1;
  }
  printf("File is Successfully Open\n");
  
  while(iRet=read(Fd,Data,sizeof(Data)))
  {
    for(i=0;i<iRet;i++)
	{
	  if(Data[i]>='a'&& Data[i]<='z')
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
  char Fname[30];
  int iRet=0;
  
  printf("Enter File Name to open\n");
  scanf("%s",Fname);
  
  iRet=CountSmall(Fname);
  
  printf("Numbernof Small Characters are %d\n",iRet);
 return 0;
}