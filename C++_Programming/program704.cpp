#include<iostream>

using namespace std;

int CountDigit(int iNo)
{
    
    static int iCount = 0;

    if(iNo != 0)
    {
        iCount++;
        cout<<iNo<<"\n";   // Updated
        CountDigit(iNo / 10);
    }

    return iCount;
    
}
int main()
{
    int iRet = 0;
    int iValue = 0;

    cout<<"Enter number : \n";
    cin>>iValue;

    iRet = CountDigit(iValue);
    
    //cout<<"Number of digits are :"<<iRet<<"\n";

    return 0;
}