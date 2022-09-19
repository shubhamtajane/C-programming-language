#include<stdio.h>

int Max(int iNo)
{
 static int iDigit=0;
 static int iSum=0;
static int iCnt=0;
  if(iNo>0)
  {
    iDigit=iNo%10;
  if(iSum<iDigit)
  {
	 iSum=iDigit;
  } 
    iNo=iNo/10;
	Max(iNo);
   }
  return iSum;
 }


int main()
{
 int iValue=0;
 int iRet=0;
 
 printf("Enter Number\n");
 scanf("%d",&iValue);
 
 iRet=Max(iValue);
 
 printf("%d",iRet);
 return 0;
}