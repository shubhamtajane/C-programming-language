#include<stdio.h>

int SumNonFact(int iNo)
{
  int iCnt=0;
  int iSum=0;
  
  for(iCnt=iNo;iCnt>=1;iCnt--)
  if((iNo%iCnt)!=0)
   {
     iSum=iSum+iCnt;
    }
	return iSum;
}



int main()
{
 int iValue=0;
 int iRet=0;
 
 printf("Enter Number\n");
 scanf("%d",&iValue);
 
 iRet=SumNonFact(iValue);
 
 printf("%d",iRet);
 return 0;
}