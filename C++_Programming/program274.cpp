#include<iostream>

using namespace std;

template <class T>

int CountFrequency(T Arr[], int iSize, T No)
{
    int iCnt = 0;
    T iCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == No)
        {
            iCount++;
        }
    }
    return iCount;
}
int main()
{
    float Brr[] = {10.0f,20.0f,30.3f,40.0f,50.0f,10.0f};
    int iRet = 0;

    iRet = CountFrequency(Brr,6,10.0f);
    cout<<"Frequency is :"<<iRet<<"\n";

    return 0;
}