#include<stdio.h>
int Summetion(int iNo)
{
    int iCnt = 0;
    int iSum =0;
    if(iNo<0)
    {
        iNo = -iNo;

    }
    for(iCnt =1; iCnt<=iNo; iCnt++)
    {
        iSum = iCnt+iSum;
    }
    return iSum;
    
}
int main()
{
    int iValue = 0;
   int  iRet = 0;
    printf("enter the number \n");
    scanf("%d",& iValue );
    iRet = Summetion(iValue);
    printf("Summetion is %d\n", iRet);
    return 0;
}