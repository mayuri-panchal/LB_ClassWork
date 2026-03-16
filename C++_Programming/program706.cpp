#include<iostream>

using namespace std;

void DisplayDigit(int iNo)
{
    if(iNo != 0)
    {
        cout<<iNo<<"\n";
        DisplayDigit(iNo / 10);
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter number : \n";
    cin>>iValue;

    DisplayDigit(iValue);
    
    //cout<<"Number of digits are :"<<iRet<<"\n";

    return 0;
}