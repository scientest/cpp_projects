#include<iostream>
using namespace std;
void addandprint (int a ,int b) { 
cout<<"Sum:"<<a+b<<endl;
}
int main(){
    int num1,num2;
    cout<<"Enter first number: ";
    cin >> num1;
    cout<<"Enter second number: ";
    cin >> num2;
    addandprint(num1,num2);
    return 0;
}
