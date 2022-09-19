#include<stdio.h>

void DisplayConvert(char CValue)
{
 char a;
 
 char d;


  if(CValue=='a')
  {
   printf("A");
  }
  else if(CValue=='d')
  {
    printf("D");
  }
  }


int main()
{
  char cValue='\0';
  
  printf("Enter Character\n");
  scanf("%c",&cValue);
  
  DisplayConvert(cValue);
  return 0;
 }