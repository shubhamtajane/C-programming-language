#include<stdio.h>

int Fact(int iNo)
{
  static int iCnt=1;
  static int iFact=1;
  
  if(iCnt<=iNo)
   {
     iFact=iFact*iCnt;
	 iCnt++;
	 Fact(iNo);
   }
   return iFact;
}
int main()
{
 int iValue=0;
 int iRet=0;
 
 printf("Enter Number\n");
 scanf("%d",&iValue);
 
 iRet=Fact(iValue);
 
 printf("%d",iRet);
 
 return 0;
}