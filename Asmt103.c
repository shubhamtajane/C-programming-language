#include<stdio.h>
#include<stdlib.h>
int LastOcc(int Arr[],int iLength,int iNo)
{
  int iCnt = 0;
   
    for(iCnt = iLength-1; iCnt >= 0; iCnt--)
    {
            if(Arr[iCnt] == iNo)       
            {
                break;
            }
    }
        return iCnt;
 }




int main()
{
  int iSize=0;
  int iCnt=0;
  int *p=NULL;
  int iRet=0;
  int iValue=0;

  
  printf("Enter Number of Elements\n");
  scanf("%d",&iSize);
  
  printf("Enter the Number\n");
  scanf("%d",&iValue);
  
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
  
  iRet=LastOcc(p,iSize,iValue);
  
  if(iRet==-1)
  {
    printf("There is No such Number");
   }
   else
   {
     printf("Last Occurence of NUmber is %d",iRet);
	}
  free(p);
  return 0;
}