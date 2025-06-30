#include<iostream>
using namespace std;

int main()
{
    int a=1;
    for(int i=5;i>=1;i--)
    {
        for(int j=5;j>=a;j--)
        {
           cout<<j<<" ";
        
        }
        cout<<endl;
        a++;
    }

    return (0);
}