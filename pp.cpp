#include<iostream>
using namespace std;
int main(){ 
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int star=n ;
    for(int i=0;i<=n;i++){
        cout<<i * star;
    }
}