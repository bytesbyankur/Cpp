#include<iostream>
using namespace std;

class Matrix1;
class Matrix2;


class Matrix1
{
    int arr[3][3];

    public:
    friend void sum(Matrix1& o1, Matrix2& o2);
    
    void input()
    {
        cout<<"Enter the terms for array:"<<endl;

        for(int i=0;i<3;i++)
       {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
       }
    }
};

class Matrix2
{
    int arr[3][3];

    public:
    friend void sum(Matrix1& o1, Matrix2& o2);

    void input()
    {
        cout<<"Enter the terms for array:"<<endl;

        for(int i=0;i<3;i++)
      {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
      }
    }
};

void sum(Matrix1& o1, Matrix2& o2)
{

    int sum[3][3];

     for(int i=0;i<3;i++)
      {
        for(int j=0;j<3;j++)
        {
           sum[i][j]=o1.arr[i][j]+o2.arr[i][j];
        }
      }
    
      for(int k=0;k<3;k++)
    {
        cout << "| ";
        for(int l=0;l<3;l++)
        {
            cout<<sum[k][l]<<"  ";
        }
        cout << "| ";
        cout<<endl;
    }

}

int main()
{

    Matrix1 o1;
    Matrix2 o2;

    o1.input();
    o2.input();

    sum(o1,o2);

    return(0);
}
