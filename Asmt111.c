 #include<stdio.h>
 #include<stdlib.h>
 
 int Maximum(int Arr[],int iLength)
 {
 
   int iMax = Arr[0];
   int  iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(iMax < Arr[iCnt])
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
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
  
  iRet=Maximum(p,iSize);
  
  printf("%d",iRet);
  
  free(p);
  return 0;
  }