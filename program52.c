#include<stdio.h>

int SumEven(int iNo)
{
    int iDigit =0;
    int iSum = 0;

    if(iNo< 0)
    {
        iNo= -iNo;

    }

    while(iNo>0)
    {
        iDigit=iNo%10;
       if((iDigit%2)==0)
       {

        printf("%d\n",iDigit);
        iSum=iSum+iDigit;

       
       }
        iNo =iNo/10;
       
    }
     return iSum;
    
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number \n");
    scanf("%d",&iValue);

    iRet =SumEven(iValue);
    printf("Summetion of the even number is %d\n",iRet);
    
    return 0;
}