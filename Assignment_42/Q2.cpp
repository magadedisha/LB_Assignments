// Assignment 42 - Q2
#include<iostream>
using namespace std;

template<class T>
T Max(T no1, T no2, T no3)
{
    T max = no1;

    if(no2 > max)
    {
        max = no2;
    }

    if(no3 > max)
    {
        max = no3;
    }

    return max;
}

int main()
{
    cout<<"Largest Integer : "<<Max(10,20,30)<<endl;
    cout<<"Largest Float : "<<Max(5.6f,7.8f,2.3f)<<endl;

    return 0;
}
