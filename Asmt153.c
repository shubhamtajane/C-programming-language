#include<stdio.h>

void Display(int iRow,int iCol)
{
 int i=0;
 int j=0;
 char ch='\0';
 
 for(i=1;i<=iRow;i++)
 {
  for(j=1,ch='a';j<=iCol;j++,ch++)
  { 
  if(i%2==0)
  {
     printf("%d\t",j);
     }
   else
   {
   printf("%c\t",ch);
   }  

   }
   printf("\n");
	
	}
	}
	

int main()
{
  int iValue1=0;
  int iValue2=0;
  
  printf("Enter number of Rows\n");
  scanf("%d",&iValue1);
  
  printf("Enter number of Columns\n");
  scanf("%d",&iValue2);
  
  Display(iValue1,iValue2);
  
  return 0;
}