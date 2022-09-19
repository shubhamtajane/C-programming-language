#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
#define TRUE 1;
#define FALSE 0;

BOOL Check(int Arr[],int iLength)
{
	int iCnt=0;
	
	for(iCnt=0; iCnt<iLength; iCnt++)
	{
		if(Arr[iCnt]==11)
		{
			return TRUE;
		}
		
	}
	
	
	
}

int main()
{
	int iSize=0;
	BOOL *P=NULL;
	int iCnt=0;
	BOOL bRet=FALSE;
	
	printf("enter the number of elements");
	scanf("%d",&iSize);
	
	P=(int *)malloc(sizeof(int)*iSize);
	
	if(P==NULL)
	{
		printf("unable to allocate memory");
		return -1;
	}
	
	for(iCnt=0;iCnt<iSize; iCnt++)
	{
		scanf("%d",&P[iCnt]);
	}
	
	bRet=Check(P,iSize);
	
	if(bRet==1)
	{
		printf("11 is present");
	}
	else
	{
		printf("11 is absent");
	}
	
	free(P);
	
	return 0;
}