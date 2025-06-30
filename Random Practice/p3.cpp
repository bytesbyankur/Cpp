#include<iostream>
using namespace std;

bool isprime(int num)
{
    if(num <= 1)
    {
        return false;
    }
    for(int i=1; i*i<=num; ++i)
    {
        if(num % i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int lower,upper;

    cout<<"enter the lower interval:";
    cin>>lower;
    cout<<"enter the upper interval:";
    cin>>upper;

    if(lower>upper)
    {
        swap(lower,upper);
    }
    cout<<"enter the prime numbers:"<<"between"<<lower<<"and"<<upper<<"are";

    for(int i = lower; i<=upper; ++i)
    {
        if(isprime(i))
        {
            cout<<i<<" ";
        }
    }

    cout<<endl;

    return(0);
}