#include<iostream>

using namespace std;

template <class T>

T Summation(T Arr[], int iSize)
{
    int iCnt = 0;
    T fSum = 0.0f;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        fSum += Arr[iCnt];
    }
    return fSum;
}
int main()
{
    float Brr[] = {10.0f,20.0f,30.3f,40.0f,50.0f};
    float fRet = 0.0f;

    fRet = Summation(Brr,5);
    cout<<"Summation is :"<<fRet<<"\n";

    return 0;
}