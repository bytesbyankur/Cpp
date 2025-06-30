#include<iostream>
using namespace std;

int main()
{

    //Initialisation..

    int arr[3][3];

    cout<<"Enter the elements:"<<endl;

    //Input...

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }

    //Output...

    for(int k=0;k<3;k++)
    {
        for(int l=0;l<3;l++)
        {
            cout<<arr[k][l]<<"  ";
        }
        cout<<endl;
    }

    return(0);
}