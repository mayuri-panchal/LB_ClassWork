#include<iostream>

using namespace std;

int SumDigit(int iNo)
{
    static int iSum = 0;

    if(iNo != 0)
    {
        iSum = iSum + (iNo % 10);   // Updated
        SumDigit(iNo / 10);
    }

    return iSum;
    
}
int main()
{
    int iRet = 0;
    int iValue = 0;

    cout<<"Enter number : \n";
    cin>>iValue;

    iRet = SumDigit(iValue);
    
    cout<<"Sum of digits is :"<<iRet<<"\n";

    return 0;
}