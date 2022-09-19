#include<stdio.h>

int Display(char ch)
{
  printf("The Decimal value of Character is %d\n",ch);
  printf("The HexaDecimal value of Character is %x\n",ch);
  printf("The Octal value of Character is %o\n",ch);
  }
  
  

int main()
{
  char cValue='\0';
  
  printf("Enter Character\n");
  scanf("%c",&cValue);
  
  Display(cValue);
  
  return 0;
}