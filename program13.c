#include<stdio.h>
#include<stdbool.h>
bool Check(int iNo)
{
    if(
        ((iNo%3)==0)&&(iNo%5)==0)
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
    int iValue =  0;
    bool bRet = 0;
    printf("Enter the value \n");
    scanf("%d",&iValue);
    bRet = Check(iValue);
    if (bRet== true)
    {
        printf("%dNumber  is divisible by 3 and 5\n",iValue);

    }
    else 
    {
        printf("%dno is not divisible by 3 and 5\n", iValue);

    }
    return 0;

}