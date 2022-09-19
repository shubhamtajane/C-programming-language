#include<stdio.h>
#include<stdbool.h>

#define TRUE1
#define FALSE0

typedef int BOOL;

BOOL ChkDigit(char ch)
{
  while(ch!=0)
  {
    if((ch>='0')&&(ch<='9'))
     {
	   return true;
	 }
	 else
	 {
	   return false;
	 }
     ch++;
   }
 }

int main()
{
 char cValue='\0';
 BOOL bRet=false;
 
 printf("Enter the Character\n");
 scanf("%c",&cValue);
 
 bRet=ChkDigit(cValue);
 if(bRet==true)
 { 
   printf("It is Digit");
 }
 else
 {
  printf("It is Not a Digit");
 }
 return 0;
}