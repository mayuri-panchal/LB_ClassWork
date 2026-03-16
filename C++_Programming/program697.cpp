#include<iostream>

using namespace std;

void Display(int iNo)
{
    if(iNo >= 1)
    {
        Display(iNo-1);   // Head recurssion
        cout<<iNo<<"\t";
    }
    else
    {   
        cout<<"\n";
    }
}
int main()
{
    int iValue = 0;

    cout<<"Enter number : \n";
    cin>>iValue;

    Display(iValue);

    return 0;
}