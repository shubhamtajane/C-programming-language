#include<stdio.h>

typedef int BOOL;

#define TRUE 1;
#define FALSE 0;

BOOL ChkZero(int iNo)
{
	
	int iCnt=0,iDigit=0;
	while(iNo!=0)
	{   
	 iDigit=iNo%10;
	 if(iDigit==0)
	 {
	  return TRUE;
	}
	iNo = iNo /10;
	}
	 return FALSE;
	}	
	
	int main()
{
	int iValue=0;
	BOOL bRet=FALSE;
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	bRet=ChkZero(iValue);
		if(bRet==1)
		{
			printf("it contains zero\n");
		}
		else
		{
			printf("there is no zero\n");
		}
	return 0;
}