 #include<stdio.h>
 #include<stdlib.h>
 
 int Difference(int Arr[],int iLength)
 {
 
   int iMax = Arr[0];
   int  iCnt = 0;
   int iMin=Arr[0];
   int iDiff=0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(iMax < Arr[iCnt])
        {
            iMax = Arr[iCnt];
        }
		else if(iMin>Arr[iCnt])
		{
		 iMin=Arr[iCnt];
		}
		iDiff=iMax-iMin;
    }
  printf("Difference between largest and smallest is : %d",iDiff);
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
  
 Difference(p,iSize);
  
 
  
  free(p);
  return 0;
  }