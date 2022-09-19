#include<stdio.h>

void Pattern(int iRow,int iCol)
{
  int i=0;
  int j=0;
  int iNo1=0;
  int iNo2=0;
  
  for(i=1;i<=iRow;i++)
  {  
    for(j=1;j<=iCol;j++)
	{ 
	  iNo1++;
	  if(iNo1<=9)
	   {
	     printf("%d\t",iNo1);
	   }
	   else 
	   {
	   (iNo2++);
	     printf("%d\t",iNo2);
	   }
	 
    }
	  printf("\n");
  }
	
}



int main()
{
  int iValue1=0;
  int iValue2=0;
  
  printf("Enter Number of Rows\n");
  scanf("%d",&iValue1);
  
  printf("Enter Number of Columns\n");
  scanf("%d",&iValue2);
  
  Pattern(iValue1,iValue2);
   
  return 0;
}