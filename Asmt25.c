#include<stdio.h>
#include<stdbool.h>

//#define TRUE1
//#define FALSE0
//typedef int BOOL;

int CheckEven(int iNo)
{
  if((iNo % 2)==0)
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
 bool bRet=false;
 
 printf("Enter Number\n");
 scanf("%d",&iValue);
 
 bRet=CheckEven(iValue);
 if(bRet==true)
 {
  printf("%d is Even Number ",iValue);
  }
  else
  {
   printf("%d is not Even",iValue);
  }
}