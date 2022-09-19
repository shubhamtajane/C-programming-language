#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define TRUE
#define FALSE
typedef int BOOL;

BOOL Check(int Arr[],int iLength,int iNo)
{
  int iCnt=0;
  
  for(iCnt=0;iCnt<iLength;iCnt++)
  {
    if(Arr[iCnt]==iNo)
	{
	  return true;
     }
 }
 }




int main()
{
  int iSize=0;
  int iCnt=0;
  int *p=NULL;
  BOOL bRet=false;
  int iValue=0;
  
  
  printf("Enter Number of Elements\n");
  scanf("%d",&iSize);
  
  printf("Enter the Number\n");
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
  
  bRet=Check(p,iSize,iValue);
  if(bRet==true)
  {
   printf("Number is Present");
  }
  else
  {
    printf("Number is not present");
  }
  return 0;
}