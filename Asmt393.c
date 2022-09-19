#include<stdio.h>

int Small(char *str)
{
 static int iCnt=0;
 if(*str!='\0')
 {
 if((*str>='a')&&(*str<='z'))
 {
   iCnt++;
  }
  str++;
  Small(str);
 }
 return iCnt;
}



int main()
{
  char arr[20];
  int iRet=0;
  
  printf("Enter String\n");
  scanf("%[^\n]s",arr);
  
  iRet=Small(arr);
  
  printf("%d",iRet);
  return 0;
 }