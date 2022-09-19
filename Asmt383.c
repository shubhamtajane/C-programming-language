#include<stdio.h>

int strlen(char *str)
{
  static int iCnt=0;
  
  if(*str!='\0')
  { 
    iCnt++;
	*str++;
    strlen(str); 
  }
  return iCnt;
}
	

int main()
{
 int iRet=0;
 char arr[20];
 
 printf("Enter String\n");
 scanf("%s",arr);
 
 iRet=strlen(arr);
 
 printf("%d",iRet);
 
 return 0;
}