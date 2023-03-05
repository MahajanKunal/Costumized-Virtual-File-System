#include<stdio.h>
int Addition(int iNo1, int iNo2)
{
    int iAns = 0;
    iAns = iNo1+iNo2;
    return iAns;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;

    printf("Enter first number \n");
    scanf("%d", & iValue1);
    
    printf("Enter Second number \n");
    scanf("%d", & iValue2);

   iValue3 =  Addition(iValue1, iValue2);

printf("Addition is %d\n", iValue3);
    return 0;



}