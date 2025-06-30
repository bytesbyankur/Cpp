#include<iostream>
using namespace std;

class Array
{
    int n=0;
    int arr[1000];

    public:

    void input()
    {
        cout<<"Enter the no of terms u want in Array"<<endl;
        cin>>n;

        cout<<"Enter the elements of array"<<endl;

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
    }

    void Even()
    {
        cout<<"The even nos in the array are: ";
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2==0)
            {
                cout<<arr[i]<<",";
            }
        }
    }
};

int main()
{
    Array o;
    o.input();
    o.Even();


    return(0);
}