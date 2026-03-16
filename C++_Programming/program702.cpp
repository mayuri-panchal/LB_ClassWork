#include<iostream>

using namespace std;

int CountDigit(int iNo)
{
    
    static int iCount = 0;

    if(iNo != 0)
    {
        iCount++;
        iNo = iNo / 10;
        cout<<iNo<<"\n";
        CountDigit(iNo);
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

    // cout<<"Number of digitd are :"<<iRet<<"\n";

    return 0;
}