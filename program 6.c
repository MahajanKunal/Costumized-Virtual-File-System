#include<stdio.h>
void Display(int iNo)
{
    int iCnt =0;
    if(iNo<0)
    {
        printf("Enter the Positive Value only") ;
           }
           for(iCnt = 1; iCnt<=iNo; i++)
           {
            printf("Renu\n");
           }
}
int main()
{
    int iValue = 0;
    printf("Enter The Number\n");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}