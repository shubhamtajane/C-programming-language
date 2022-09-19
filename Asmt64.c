#include<stdio.h>

int CoutFour(int iNo)
{
  int iCnt=0;
  int iDigit=0;
 
  while(iNo!=0)
  {
    iDigit=iNo%10;
	if(iDigit==4)
	{
	 iCnt++;
	}
	iNo=iNo/10;
  }
  return iCnt;
  }


int main()
{
 int iValue=0;
 int iRet=0;
 
 printf("Enter Number\n");
 scanf("%d",&iValue);
 
 iRet=CoutFour(iValue);
 printf("%d",iRet);
 
 return 0;
 }