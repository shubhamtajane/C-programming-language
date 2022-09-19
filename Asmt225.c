#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL DisplaySchedule(char chDiv)
{
  while(chDiv!='\0')
  {
     if((chDiv=='A')||(chDiv=='a'))
        {
		 printf("Your Exam at 7Am");
		 break;
		 }
	  else if((chDiv=='B')||(chDiv=='b'))
        {
		 printf("Your Exam at 8:30Am");
		 break;
		 }
	  else if((chDiv=='C')||(chDiv=='c'))
	     {
		 printf("Your Exam at 9:20Am");
		 break;
		 }
		 else if((chDiv=='D')||(chDiv=='d'))
	     {
		 printf("Your Exam at 10:30Am");
		 break;
		 }
		 
		}
		chDiv++;
}

int main()
{
  char cValue='\0';
  BOOL bRet=FALSE;
  
  printf("Enter your Division\n");
  scanf("%c",&cValue);
  
 bRet= DisplaySchedule(cValue);
 return 0;
}