#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int CountWhitespace(char Fname[])
{
  int iCnt=0;
  int i=0,iRet=0;
  int Fd=0;
  char Data[1024];
  
  Fd=open(Fname,O_RDWR);
  
  if(Fd==-1)
  {
    printf("Unable to file open\n");
	return -1;
  }
  
  while(iRet=read(Fd,Data,sizeof(Data)))
  { 
    for(i=0;i<iRet;i++)
	{
	  if(Data[i]==' ')
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
  
  printf("Enter file name to open\n");
  scanf("%s",Fname);
  
  iRet=CountWhitespace(Fname);
  
  printf("Number of white spaces are %d",iRet);
  return 0;
 }
  