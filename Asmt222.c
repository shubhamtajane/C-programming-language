#include<stdio.h>
#include<stdbool.h>

#define TRUE1
#define FALSE0
typedef int BOOL;

BOOL ChkCapital(char ch)
{
  while(ch!='\0')
  {
    if((ch>='A')&&(ch<='Z'))
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
  
  bRet=ChkCapital(cValue);
  
  if(bRet==true)
  {
    printf("It is Capital Letter");
  }
  else
  {
    printf("It is Not a capital Letter");
  }
  return 0;
}