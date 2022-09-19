#include<stdio.h>

void StrCpySmall(char *src,char *dest)
{
  while(*src!='\0')
  {
    if((*src>='A')&&(*src<='Z'))
	{
	  
	  *src=*src+32;
	}
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
 
 StrCpySmall(arr,brr);
 printf("%s",brr);
return 0;
}