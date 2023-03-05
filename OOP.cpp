#include<iostream>
using namespace std;
class Arithmetic
{
    public :
    int iNo1;
    int iNo2;
    Arithmetic()
    {
        cout<<"inside Default constructor"<<endl;
        int iNo1  = 0;
        int iNo2  = 0;
    }
    Arithmetic(int A, int B)
    {
        cout<<"inside parameterised constractor"<<endl;
        iNo1 = A;
        iNo2 = B;

    }
    ~Arithmetic()
    {
        cout<<"inside destructor"<<endl;
    }
    int Addition()
    {
        int iAns = 0;
       iAns = iNo1+iNo2;
       return iAns;
    }
    int Substraction()
    {
        int iAns = 0;
       iAns = iNo1-iNo2;
       return iAns;
    }
};

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;
    cout<<"Enter the first Number\n";
    cin>>iValue1;

    cout<<"Enter the second Number"<<endl;
    cin>>iValue2;
    Arithmetic obj1;
    Arithmetic  obj2(iValue1, iValue2);

    iRet=obj2.Addition();
    cout<<"Addition is"<<iRet<<endl;

    iRet=obj2.Substraction();
    cout<<"Substraction is"<<iRet<<endl;

    
    return 0;
}