#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iLength)
{
 int iCnt=0;
 int iDiff=0;
 int iEven=0;
 int iOdd=0;
 
 for(iCnt=0;iCnt<iLength;iCnt++)
 {
   if((Arr[iCnt]%2)==0)
   {
     iEven=iEven+Arr[iCnt];
    }
	else if((Arr[iCnt]%2)!=0)
	{
	  iOdd=iOdd+Arr[iCnt];
	 }
   iDiff= iEven - iOdd;
}
return iDiff;
}
  

int main()
{
 int *ptr=NULL;
 int iSize=0;
 int iCnt=0;
 int iRet=0;
 
 printf("Enter the Number of Elements\n");
 scanf("%d",&iSize);
 
 ptr =(int*)malloc(iSize * sizeof(int));
 
 printf("Enter Elements\n");
 for(iCnt=0;iCnt<iSize;iCnt++)
 {
  scanf("%d",&ptr[iCnt]);
 }
 
 iRet=Difference(ptr,iSize);
  
 printf("%d",iRet);
 free(ptr);
 return 0;
}