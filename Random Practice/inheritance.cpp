#include<iostream>
using namespace std;

class Student
{
    protected: int roll_numbers;
    public:
        void get_number(int a)
        {
            roll_numbers=a;
        }
        void put_number()
        {
            cout<<"Roll no: "<<roll_numbers<<"\n";
        }
};

class test:public Student
{
    protected: float part1,part2;
    public: 
        void get_marks(float x,float y)
        {
            part1=x;
            part2=y;
        }

        void put_marks()
        {
            cout<<"Marks Obtained: "<<endl;
            cout<<"PART 1: "<<part1<<endl;
            cout<<"PART 2: "<<part2<<endl;
        }
};

class sports
{
    protected: float score;
    public:
        void get_score(float s)
        {
            score=s;
        }

        void put_score()
        {
            cout<<"Sports weight: "<<score<<endl<<endl;
        }
};

class results: public test, public sports
{
    float total;
    public:
        void Display();
};

void results::Display()
{
    total=part1+part2+score;
    put_number();
    put_marks();
    put_score();
    cout<<"Total: "<<total<<endl;
}

int main()
{

    results student;
    student.get_number(1234);
    student.get_marks(30.5,25.5);
    student.get_score(6.0);
    student.Display();

    return 0;
}