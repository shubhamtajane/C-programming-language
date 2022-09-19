#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[],int iLength)
{
  int iCnt=0;
  int iCount=0;
   for(iCnt=0;iCnt<iLength;iCnt++)
   {
     if((Arr[iCnt]%2)==0)
	 {
	   iCount++;
	 }
	}
	return iCount;
}

int main()
{
  int *p=NULL;
  int iSize=0;
  int iCnt=0;
  int iRet=0;
  
  printf("Enter Number of Elements\n");
  scanf("%d",&iSize);
  
  p=(int*)malloc(iSize*sizeof(int));
   
  printf("Enter Elements\n");
  for(iCnt=0;iCnt<iSize;iCnt++)
  {
    scanf("%d",&p[iCnt]);
  }
  
 iRet=CountEven(p,iSize);
  printf("%d",iRet);
  free(p);
  return 0;
 }