#include<stdio.h>

void Display(int iNo)
{
  int iCnt=0;
  
  if(iNo<=10)
   {
    printf("Hello");
   }
   else
   {
    printf("Demo");
    }
	}





int main()
{ 
  int iValue=0;
  
  printf("EnternNumber\n");
  scanf("%d",&iValue);
  
  Display(iValue);
  
  return 0;
  }