#include<iostream>
using namespace std;

long long Fibonacci(long long k){
   long long a = 0, b = 1;
   while(a<=k){
        long long temp = a;
        a = b;
        b += temp;
   }
   return a;
}
int main (){
    long long k;
    cin >> k; 
    cout<<Fibonacci(k);

    return 0; 
}