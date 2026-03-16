#include<iostream>

using namespace std;

int CountDigit(int iNo)
{
    
    static int iCount = 0;

    if(iNo != 0)
    {
        iCount++;
        CountDigit(iNo / 10);  // Updated
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
    
    cout<<"Number of digitd are :"<<iRet<<"\n";

    return 0;
}