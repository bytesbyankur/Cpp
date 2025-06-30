#include<iostream>
using namespace std;

class Mammals
{
 public:
    void Print1()
    {
     cout<<"I am Mammal"<<endl;
        
    }
};

class MarineAnimals
{
 public:
    void Print2()
    {
        cout<<"I am Marine Animal"<<endl;
    }
};

class BlueWhale: public Mammals, public MarineAnimals
{
 public:
    void Print3()
    {
        cout<<"I belong to Both Categories: Mammals as well as Marine Animals"<<endl;
    }
};

int main()
{
    Mammals o1;
    MarineAnimals o2;
    BlueWhale o3;

    o1.Print1();
    o2.Print2();
    o3.Print3();
    o3.Print1();
    o3.Print2();
    
    return 0;
}