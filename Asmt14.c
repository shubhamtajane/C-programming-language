//accept one number and checkwhether is divisible by 5.

#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;
#define TRUE
#define FALSE

BOOL Check(int iNo)
{
 if((iNo%5)==0)
 {
  return true;
  }
  else
  {
  return false;
  }
  }


int main()
{
  int iValue=0;
  BOOL bRet=FALSE
  
  printf("Enter Number\n");
  scanf("%d",&iValue);
  
  bRet=Check(iValue);
  if(bRet==true)
  {
   printf("Divisible by 5");
   }
   else
   {
    printf("not Divisible by 5");
	}
	
	return 0;
 }