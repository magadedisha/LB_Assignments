// Assignment 42 - Q5
#include<iostream>
using namespace std;

template<class T>
T Min(T *arr, int iSize)
{
    T min = arr[0];

    for(int i = 1; i < iSize; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    return min;
}

int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.0f,3.7f,9.8f,8.7f};

    int iRet = Min(arr,5);
    cout<<"Smallest Integer : "<<iRet<<endl;

    float fRet = Min(brr,4);
    cout<<"Smallest Float : "<<fRet<<endl;

    return 0;
}
