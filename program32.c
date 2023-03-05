#include<stdio.h>
int SumFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        if((iNo%iCnt)==0)
        {
            printf("%d\n",iCnt);
            iSum = iSum+iCnt;
        }
    }
    return iSum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter the number \n");
    scanf("%d",&iValue);

    iRet = SumFactors(iValue);
    printf("sumetion of the factors is %d \n",iRet );
    return 0;
}