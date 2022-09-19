#include<stdio.h>
#include<stdbool.h>

#define TRUE1
#define FALSE0
typedef int BOOL;

BOOL ChkSmall(char ch)
{
  while(ch!='\0')
  {
    if((ch>='a')&&(ch<='z'))
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
  
  bRet=ChkSmall(cValue);
  
  if(bRet==true)
  {
    printf("It is Small case Letter");
  }
  else
  {
    printf("It is Not a small case Letter");
  }
  return 0;
}