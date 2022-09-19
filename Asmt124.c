#include<stdio.h>

void Pattern(int iRow)
{
  int i=0;
  int j=0;
  
  for(i=1;i<=iRow;i++)
  
	{
	  printf("#\t%d\t*\t",i);
	}
	printf("\n");
  }




int main()
{
  int iValue1=0;
  int iValue2=0;
  
  printf("Emter number of elements\n");
  scanf("%d",&iValue1);
  
  Pattern(iValue1);
  
  return 0;
}