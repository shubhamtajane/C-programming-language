#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[],int iLength)
{
  int iDigit=0;
  int iSum=0;
  int iCnt=0;
  
  if(Arr[iCnt]<0)
  {
    Arr[iCnt]=-Arr[iCnt];
  }
  for(iCnt=0;iCnt<iLength;iCnt++)
  {
	 while(Arr[iCnt]>0)
	{
	iDigit=Arr[iCnt]%10;
    iSum=iSum+iDigit;
     Arr[iCnt]=Arr[iCnt]/10;
    }
   printf("%d\t",iSum);
   iSum=0;
}
 

}
int main()
{
  int *p=NULL;
  int iSize=0;
  int iCnt=0;
  
  printf("Enter NUmber of Elements\n");
  scanf("%d",&iSize);
  
  p=(int*)malloc(iSize*sizeof(int));
  
  if(p==NULL)
  {
    printf("Unable to allocate Memory");
	return -1;
  }
  
  printf("Enter Elements\n");
  
  for(iCnt=0;iCnt<iSize;iCnt++)
  {
    scanf("%d",&p[iCnt]);
  }
  
  Digits(p,iSize);
  
  free(p);
  return 0;
 }