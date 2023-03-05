#include<stdio.h>
#include<stdbool.h>
bool ChkEven(int iNo)
{
    if(( iNo%2 )==0)
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
    bool bRet = 0;
    printf("Enter the number \n");
    scanf("%d",& iValue);
    bRet = ChkEven(iValue);
    if (bRet==true)
    {
        printf("Value is Even\n");
    }
    else
    {
        printf("Value is odd\n");
    }
    return 0;
}