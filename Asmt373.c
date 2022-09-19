#include<stdio.h>

void DisplayR(int iNo)
{
  int iCnt=1;
  if(iNo>=iCnt)
  {
   printf("%d\t",iNo);
    iNo--;
	DisplayR(iNo);
  }
}

int main()
{
 int iValue=0;
 
 printf("Enter Number\n");
 scanf("%d",&iValue);
 
 DisplayR(iValue);
 return 0;
}