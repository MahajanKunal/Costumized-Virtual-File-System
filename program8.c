#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        printf("Jay Hanuman\n");
    }
}
int main()
{
    int iValue =0;
    printf("Enter the No.\n");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}