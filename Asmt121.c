#include<stdio.h>
void Pattern (int iNo)
{
  int i=0;
  char ch='\0';
  
  for(i=1,ch='A';i<=iNo;i++,ch++)
   {
     printf("%c\t",ch);
    }
}


int main()
{
  int iValue=0;
  
  printf("Enter number\n");
  scanf("%d",&iValue);
  
  Pattern(iValue);
  
  return 0;
}