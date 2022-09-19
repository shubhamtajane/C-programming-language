#include<stdio.h>
#include<stdlib.h>
void Range(int Arr[],int iLength,int iStart,int iEnd)
{
  int iCnt=0;
  
  for(iCnt=0;iCnt<iLength;iCnt++)
  {
    if((Arr[iCnt]>=iStart)&&(Arr[iCnt]<=iEnd))
	{
	 printf("%d\t",Arr[iCnt]);
     }
 }
 }




int main()
{
  int iSize=0;
  int iCnt=0;
  int *p=NULL;
  int iRet=0;
  int iValue1=0;
  int iValue2=0;

  
  printf("Enter Number of Elements\n");
  scanf("%d",&iSize);
  
  printf("Enter the starting point\n");
  scanf("%d",&iValue1);
  
   printf("Enter the Ending point\n");
  scanf("%d",&iValue2);
  
  p=(int*)malloc(iSize*sizeof(int));
  
  if(p==NULL)
  {
   printf("Unable to allocate Memory\n");
   return -1;
  }
  printf("Enter Elements\n");
  for(iCnt=0;iCnt<iSize;iCnt++)
  {
    scanf("%d",&p[iCnt]);
  }
  
  Range(p,iSize,iValue1,iValue2);
  free(p);
  return 0;
}