#include<stdio.h>
#include<stdlib.h>

int Display(int Arr[],int iLength)
{
 int iCnt=0; 
 for(iCnt=0;iCnt<iLength;iCnt++)
 {
   if((((Arr[iCnt]%5)==0)&&(Arr[iCnt]%2)==0))
   {
     printf("%d",Arr[iCnt]);
   }
 }
}
 
int main()
{
 int *p=NULL;
 int iSize=0;
 int iCnt=0;
 int iRet=0;
 
 printf("Enter the Number of Elements\n");
 scanf("%d",&iSize);
 
 p=(int*)malloc(iSize * sizeof(int));
 
 printf("Enter Elements\n");
 for(iCnt=0;iCnt<iSize;iCnt++)
 {
  scanf("%d",&p[iCnt]);
 }
 
 Display(p,iSize);
 
 free(p);
 return 0;
}