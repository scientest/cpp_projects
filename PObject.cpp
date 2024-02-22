#include<iostream>
using namespace std;
// class ABC{
//     public:
//     int a=50;
// };
// int main(){
//     ABC ob1;
//     ABC *ptr;
//     ptr = &ob1;
//     cout<<ob1.a;
//     //cout<<ptr->a;
// }
class demo{
    int i;
    public:
    demo(int x){
        i=x;
    }
    int getdata(){
        return i;
    }
};
    int main(){
        demo d(55),*ptr;
        ptr=&d;
        cout<<ptr->getdata();
    }
