#include<stdio.h>
#include<stdlib.h>
int Product(int Arr[],int iLength)
{
  int iCnt=0;
  int iProd=1;
  for(iCnt=0;iCnt<iLength;iCnt++)
  {
    if(Arr[iCnt]%2!=0)
	{
	  iProd=iProd*Arr[iCnt];
     }
 }
 return iProd;
 }




int main()
{
  int iSize=0;
  int iCnt=0;
  int *p=NULL;
  int iRet=0;
  int iValue1=0;
  int iValue2=0;

  
  printf("Enter Number of Elements\n");
  scanf("%d",&iSize);
  
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
  
  iRet=Product(p,iSize);
  
  printf("%d",iRet);
  
  free(p);
  return 0;
}