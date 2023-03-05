#include<stdio.h>
#include<stdbool.h>
/*
int Sumetion(int iNo)
{
    int iCnt=0;
    int iSum=0;
    if(iNo<0)
    {
        iNo=-iNo;

    }
    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        iSum = iSum+iCnt;
    }
    return iSum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("enter the number\n");
    scanf("%d",&iValue);
    iRet=Sumetion(iValue);
    printf("Sumetion is %d\n",iRet);
    return 0;
}

#include<stdio.h>
#include<stdbool.h>

bool ChkEven(int iNo)
{
       if((iNo % 2) == 0)
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
    int iValue = 0;
    bool bRet;

    printf("Enter number\n");
    scanf("%d",&iValue);    // 21

    bRet = ChkEven(iValue);     // ChkEven(21)
    if(bRet == true)
    {
        printf("%d is even number\n",iValue);
    }
    else
    {
        printf("%d is odd number\n",iValue);
    }
    return 0;
}*/
bool Check(int iNo)
{
    if((iNo%3==0)&&((iNo%5)==0))
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
    int iValue = 0;
    bool bRet  =  0 ;
     printf("enter the number\n");
     scanf("%d",& iValue);
     bRet = Check(iValue);
     if(bRet==true)
     {
        printf("%d number divisible by 3 and 5\n",iValue);
     }
     else
     {
        printf("number is not divisble by 3 and 5 \n", iValue);
       
     
}
return 0;
}