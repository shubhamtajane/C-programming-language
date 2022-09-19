#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength)
{
 int iCnt=0;
 int FCnt=0;
 
 for(iCnt=0;iCnt<iLength;iCnt++)
 {
   if(Arr[iCnt]==11)
   {
    FCnt++;
   }
 }
 return FCnt++;
}




int main()
{
 int iSize=0;
 int *p=NULL;
 int iCnt=0;
 int iRet=0;
 
 printf("Enter NUmber if Elements\n");
 scanf("%d",&iSize);
 
 p=(int *)malloc(sizeof(int)*iSize);
 
 if(p==NULL)
 {
  printf("Unable to allocate memory");
  return -1;
 }
 printf("Enter Elements\n");
for(iCnt=0;iCnt<iSize;iCnt++)
{
  scanf("%d",&p[iCnt]);
}

iRet=Frequency(p,iSize);

printf("%d",iRet);
free(p);
return 0;
}