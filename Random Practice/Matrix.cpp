// This program displays Matrix Addition

#include<iostream>
using namespace std;

class Clac;
class Matrix
{
    int arr[3][3]; 
    friend class Calc;

    public:
        friend void Display(Matrix& o1);
        friend void Display(Matrix& o2);
        void input()
        {
            cout<<"Enter the nos in arrays"<<endl;
            for(int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                {
                    cin>>arr[i][j];
                }
            }
        }
};

class Calc
{
    int sum[3][3];

    public:
    friend void Display(Calc& o3);

        void calc(Matrix o1,Matrix o2)
        {
            for(int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                {
                    sum[i][j]=o1.arr[i][j]+o2.arr[i][j];
                }
            }
        }
};

void Display(Matrix& o)
{
    for(int i=0;i<3;i++)
            {
                cout<<"|";
                for(int j=0;j<3;j++)
                {
                    cout<<" "<<o.arr[i][j]<<" ";
                }
                cout<<"|";
                cout<<endl; 
            }  
             cout<<endl; 
           
             
}


void Display(Calc& o3)
{
    for(int i=0;i<3;i++)
            {
                cout<<"|";
                for(int j=0;j<3;j++)
                {
                    cout<<" "<<o3.sum[i][j]<<" ";
                }
                cout<<"|";
                cout<<endl; 
            }  
             cout<<endl; 
            
             
}

int main()
{
    Matrix o1,o2;
    Calc o3;

    o1.input();
    o2.input();
    o3.calc(o1,o2);

    cout<<endl;

    Display(o1);
    cout<<"+"<<endl;
     cout<<endl; 
    Display(o2);
    cout<<"="<<endl;
     cout<<endl; 
    Display(o3);


   return(0);
}