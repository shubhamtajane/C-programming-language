#include<stdio.h>

int Reverse(int iNo)
{
  if(iNo!=0)
  {
	printf("%d",iNo%10);
	iNo=iNo/10;
	Reverse(iNo);
  }
 }



int main()
{
  int iValue=0;
  int iRet=0;
  printf("Enter Number\n");
  scanf("%d",&iValue);
  
 Reverse(iValue);
 
  return 0;
 }