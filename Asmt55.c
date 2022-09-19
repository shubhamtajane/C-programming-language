#include<stdio.h>

int FactDiff(int iNo)
{
  int iCnt=0;
  int iSum=0;
  int iDiff=0;
  int iSuum=0;
  
  for(iCnt=1;iCnt<=(iNo/2);iCnt++)
   if((iNo%iCnt)==0)
   {
     iSum=iSum+iCnt;
    }
	for(iCnt=iNo;iCnt>=1;iCnt--)
	if((iNo%iCnt)!=0)
	{
	  iSuum=iSuum+iCnt;
	  }
    iDiff=iSum - iSuum;
	return iDiff;
}

int main()
{
  int iValue=0;
  int iRet=0;
  
  printf("Enter Number\n");
  scanf("%d",&iValue);
  
  iRet=FactDiff(iValue);
  
  printf("%d",iRet);
  
  return 0;
  
 }