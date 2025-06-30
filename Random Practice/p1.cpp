#include<iostream>
using namespace std;

  class Calculate;
  class Employee;

  class Employee
  {
    string name;
    int basic;

    friend class Calculate;

    public:
        void input()
        {
            cout<<"Enter your name: "<<endl;
            cin>>name;
            
            cout<<"Enter your basic pay: "<<endl;
            cin>>basic;
        }

  };

  class Calculate
  {
    double pf,ma,hra,gross=0;


    public:
    void calc(Employee &e)
    {
        ma=(15.0/100)*e.basic;
        hra=(10.0/100)*e.basic;
        pf=(5.0/100)*e.basic;

        gross=e.basic+ma+hra-pf;

       
    }

     void print(Employee &e)
  {

    cout<<"Name: "<<e.name<<endl;
    cout<<"Basic: "<<e.basic<<endl;  
    cout<<"Gross: "<<gross<<endl;

  }

  };

 
  int main()
  {
    Calculate o1;
    Employee o2;

    o2.input();
    o1.calc(o2);
    o1.print(o2);


    return(0);
  }