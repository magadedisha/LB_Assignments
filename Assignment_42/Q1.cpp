// Assignment 42 - Q1
#include<iostream>
using namespace std;

template<class T>
T Multiply(T no1, T no2)
{
    T ans;
    ans = no1 * no2;
    return ans;
}

int main()
{
    int iRet = Multiply(10,20);
    cout<<"Multiplication of Integers : "<<iRet<<endl;

    float fRet = Multiply(10.0f,20.0f);
    cout<<"Multiplication of Floats : "<<fRet<<endl;

    return 0;
}
