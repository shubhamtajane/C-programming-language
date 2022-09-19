#include<stdio.h>

void StrCpyX(char *src,char *dest)
{
  while(*src!='\0')
  {
    *dest=*src;
	src++;
	dest++;
  }
  *dest='\0';
 }



int main()
{
 char arr[30];
 char brr[30];
 
 printf("Enter String\n");
 scanf("%[^\n]s",arr);
 
 StrCpyX(arr,brr);
 
 printf("%s",brr);
 return 0;
}