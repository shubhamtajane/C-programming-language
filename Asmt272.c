#include<stdio.h>

void StrNcpyX(char *src,char *dest,int iCnt)
{
 while((*src!='\0')&&(iCnt!=0))
 {
   *dest=*src;
   src++;
   dest++;
   iCnt--;
 }
 *dest='\0';
}


int main()
{
 char arr[30];
 char brr[30];
 
 printf("Enter String\n");
 scanf("%[^\n]s",arr);
 
 StrNcpyX(arr,brr,10);
 
 printf("%s",brr);
 
 return 0;
}
