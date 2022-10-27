#include<iostream>
using namespace std;

int main(){
    int n , a = 0;
    cout<<"N = ";
    cin>>n;

    for(int i=9; i>1;i--){
        while(n%i==0 && n>1){
            a = a * 10 + i;
            n = n / i;
        }
    } 
    int b = 0;
    while(a>0){
        b = b * 10 + a;
        a = a / 10;
    }
    if(n > 1)
        cout<<"NO";
    else
        cout<<"K ="<<b;
}