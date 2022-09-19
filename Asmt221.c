#include<stdio.h>
#include<stdbool.h>
#define TRUE1
#define FALSE0

typedef int BOOL;

BOOL CheckAlpha(char ch)
{
  while(ch!='\0')
  {
    if((ch>='A')&&(ch<='Z')||(ch>='a')&&(ch<='z'))
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
  
  bRet=CheckAlpha(cValue);
  
  if(bRet==true)
  {
    printf("It is Character");
  }
  else
  {
      printf("It is not a Character");
   }
   return 0;
}