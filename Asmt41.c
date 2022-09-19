#include<stdio.h>

int MultFact(int iNo)
{
  int iMult=1;
  int iCnt=0;
  
  for(iCnt=1;iCnt<=(iNo/2);iCnt++)
  if((iNo%iCnt)==0)
  {
   iMult=iMult*iCnt;
  }
  return iMult;
}

int main()
{
  int iValue=0;
  int iRet=0;
  
  printf("Enter Number\n");  
  scanf("%d",&iValue);
  
  iRet=MultFact(iValue);
  
 printf("%d",iRet);
  
  return 0;
}