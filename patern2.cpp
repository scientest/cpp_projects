#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int i=1;
   int count=1;
   // char ch='A';
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<count;
            //cout<<ch;
           ++count;
           // ++ch;
            ++j;
        }
        cout<<endl;
        ++i;
    }
}