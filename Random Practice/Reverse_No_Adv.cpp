// This program reverses the number irrespective of its sign 

#include<iostream>
using namespace std;

int main()
{

    cout<<"Enter a number: ";
    int n,t,s=0;
    cin>>n;

    int sign = (n>0)?1:-1;

    n=abs(n);

    while(n>0)
    {
        t=n%10;
        s=s*10+t;
        n/=10;
    }

    s*=sign;

    cout<<"Reversed No= "<<s<<endl;

    return 0;
}