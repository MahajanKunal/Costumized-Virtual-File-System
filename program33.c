#include<stdio.h>
#include<stdbool.h>
int SumFactors(int iNo)
{
    int iCnt  =0;
    int iSum = 0;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1; iCnt<=(iNo/2);iCnt++)
    {
        if((iNo%iCnt)==0)
        {
            printf("%d\n",iCnt);

            iSum=iSum+iCnt;
        }

    }
    return iSum;

}
bool CheckPerfect(int iNo)
{
    int iAns = 0;
    iAns=SumFactors(iNo);
    if(iAns==iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue= 0;
    bool bRet;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    bRet= CheckPerfect(iValue);

    if(bRet==true)
    {
        printf("%d number is perfect \n",iValue);
    }
    else{
        printf("%d number is not perfecr\n",iValue);
    }

    return 0;

}