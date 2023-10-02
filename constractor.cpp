#include<iostream>
using namespace std;
class student{
    int rno;
    char name[50];
    double fee;
    public:
    student()
    {
        cout<<"Enter the Rollno:";
        cin>>rno;
        cout<<"Enter the name:";
        cin>>name;
        cout<<"Enter the fee:";
        cin>>fee;
    }
    void display()
    {
        cout<<endl<<rno<<"\n"<<name<<"\n"<<fee;
    }
};
int main ()
{
    student s; 
    s.display();
    return 0;
}