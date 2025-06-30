#include<iostream>
using namespace std;

int main()
{
    int a=79;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<(char) a<<" ";
            a--;
        }
        cout<<endl;
    }

    return (0);
}