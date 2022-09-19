#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength,int iNo)
{
  int iCnt=0;
  int FCnt=0;
  
  for(iCnt=0;iCnt<iLength;iCnt++)
  {
     if(Arr[iCnt]==iNo)
	 {
	   FCnt++;
	  }
	 
  }
  return FCnt;
 }



int main()
{
 int *p=NULL;
 int iSize=0;
 int iValue=0;
 int iRet=0;
 int iCnt=0;
 
 
 printf("Enter Number of Elements\n");
 scanf("%d",&iSize);
 
 printf("Enter value\n");
 scanf("%d",&iValue);
 
 p=(int*)malloc(iSize*sizeof(int));
 
 if(p==NULL)
 {
   printf("Unable to allocate Memory\n");
   return -1;
  }
 
 printf("Enter Elements\n");
 for(iCnt=0;iCnt<iSize;iCnt++)
 {
   scanf("%d",&p[iCnt]);
 }
 
 iRet=Frequency(p,iSize,iValue);
 
 printf("%d",iRet);
 
 free(p);
 
 return 0;
}
 