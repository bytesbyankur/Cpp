#include<iostream>
using namespace std;

class Checker;
class Array
{
    int arr[1000],n;
    friend class Checker;

    public:

    void input()
    {
        cout<<"Enter the no of terms u want in Array"<<endl;
        cin>>n;

        cout<<"Enter the terms for array:"<<endl;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
    }
};


class Checker
{
    int sum=0,prod=1;
    
    public:
    friend void display(Checker& c);


    void checker(Array& a)
    {
        for(int i=0;i<a.n;i++)
        {
            if(a.arr[i]%2==0)
            {
                sum+=a.arr[i];
            }

            else
            {
                prod*=a.arr[i];
            }
        }
    }
};

void display(Checker& c)
{
    cout<<"Sum of Even Nos= "<<c.sum<<endl;
    cout<<"Product of Odd Nos= "<<c.prod<<endl;
}

int main()
{
    Array o1;
    Checker o2;

    o1.input();
    o2.checker(o1);
    display(o2);

    return(0);
}