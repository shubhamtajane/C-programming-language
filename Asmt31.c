#include<stdio.h>
void PrintEven(int iNo)
{
int iCnt=0;

if(iNo<=0)
  {
   return;
   }
for(iCnt=1;iCnt<=14;iCnt++)
   {
if((iCnt%2)==0)
 if(iCnt<=14)
{
  printf("%d\n",iCnt);
  }
	 }

}

int main()
{
  int iValue =0;
  
  printf("Enter Number\n");
  scanf("%d",&iValue);
  
  PrintEven(iValue);
  
  return 0;
 }