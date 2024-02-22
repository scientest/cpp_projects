#include<iostream>
#include<climits>
using namespace std;
void swapptr(int *,int *){
   int a = int b;
    int b = int c;
    int c = int a;
}
void swapref(int &,int &);
int main(){
    int a,b,c;
    cin>>a>>b;
    cout<<"Before swap "<<"\n";
    cout<<"a="<<a<<"b="<<b<<"\n";
    swapptr(&a,&b);
    cout<<"After swap with pass by pointer"<<"\n";
    cout<<"a="<<a<<"b="<<b<<"\n";
    swapref(a,b);
    cout<<"After swap with pass by referance \n";
    cout<<"a="<<a<<"b="<<b<<"\n";

}