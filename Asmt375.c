#include<stdio.h>

void DisplayR(int iNo)
{
  static int iCnt=1;
  static char ch='a';
  
  if(iCnt<=iNo)
  {
   printf("%c\t",ch);
   iCnt++;
   ch++;
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