#include<iostream>
using namespace std;

bool CheckPerfect(int iNo)
{
    static int iCnt = 1;
    static int iSum = 0;

    if(iCnt <= (iNo/2))
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
        iCnt++;
        
        CheckPerfect(iNo);
    }

    return (iSum == iNo);
    
}
int main()
{
    bool bRet = false;
    int iValue = 0;

    cout<<"Enter number : \n";
    cin>>iValue;

    bRet = CheckPerfect(iValue);

    if(bRet == true)
    { 
        cout<<iValue<<" is perfect number"<<"\n";
    }
    else
    {
        cout<<iValue<<" is not perfect number"<<"\n";
    }

    return 0;
}