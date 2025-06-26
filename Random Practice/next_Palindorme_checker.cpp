// **This Program finds the next greater palindrome than the number inserted**

#include<iostream>
using namespace std;

bool Palindrome_checker(int a)
{
    int a1=a,t,s=0;
    while(a>0)
    {
        t=a%10;
        s=s*10+t;
        a/=10;
    }

    if(s==a1)
    {
        return true;
    }

    else
    {
        return false;
    }
}

void next_Palin_finder(int a)
{
    a=a+1;
    int a1,t,s=0;
    while(true)
    {
       if (Palindrome_checker(a)) {
            cout << "Next Palindrome Number is: " << a << endl;
            break;
        }
        a++;
    }
}

int main()
{
    int n;
    cout<<"Enter a no: ";
    cin>>n;

   next_Palin_finder(n);

    return 0;
}