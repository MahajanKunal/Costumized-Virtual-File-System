#include<stdio.h>
void JwelersPortal(int iWeight)
{
    switch(iWeight)
    {
          case 1: 
        
            printf("your bill payment amount is 6000\n");
            break;
        case 2:
            printf("your bill payment amount is 12000 \n");
                break;
            case 5:
                printf("yout bill payment amount is 300000\n");
                    break;
            case 10:
               printf("your bill payment amount is 600000\n");
                break;

                default:
                printf("invadid amount\n");
        
    }
}
int main()
{
    int iValue= 0;
    printf("Enter the gold coin size that you want to purchase\n");
    scanf("%d", &iValue);
    JwelersPortal(iValue);
    return 0;
}