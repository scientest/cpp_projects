#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    //phali se lykar last column tak jana he
    while(i<=n) {
        //ab row kye liye bhi print kareva lye tye he
        int j=1;
        while(j<=n){
        cout<<n-j+1;
        j = j+1;
        }
        cout<<endl;
        i = i +1;
    }
}