#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

bool ChkVowel(char Cvalue)
{
 char a='\0',e='\0',i='\0',o='\0',u='\0';
 
 if((Cvalue=='a')||(Cvalue=='e')||(Cvalue=='i')||(Cvalue=='o')||(Cvalue=='u')||(Cvalue=='A')||(Cvalue=='E')||(Cvalue=='I')||(Cvalue=='O')||(Cvalue=='U'))
 
 {
   return TRUE;
 }
 else
 {
 return FALSE;
 }



}


int main()
{
 char cValue='\0';
printf("Enter Character\n");
scanf("%c",&cValue);
bool iRet=FALSE;

iRet=ChkVowel(cValue);
if(iRet==TRUE)
{
  printf("It is Vowel");
}
else
{
 printf("Itis not a vowel");
}  


return 0;
}