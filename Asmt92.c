#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength)
{
 int iCnt=0;
 int iEven=0;
 int iOdd=0;
 int iEcount=0;
 int iOcount=0;
 int iDiff=0;
 
 for(iCnt=0;iCnt<iLength;iCnt++)
 {
   if((Arr[iCnt]%2)==0)
   {
     iEven=iEcount++;
   }
   else
   {
    iOdd=iOcount++;
    }
   }
   iDiff=iEven-iOdd;
  return iDiff;
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
 
 if(p==NULL)
 {
   printf("Unable to Allocate Memory");
   return -1;
  }
 printf("Enter elements\n");
 for(iCnt=0;iCnt<iSize;iCnt++)
 {
   scanf("%d",&p[iCnt]);
 }
 
 iRet=Frequency(p,iSize);
 
 printf("%d",iRet);
 free(p);
 return 0;
}