#include<iostream>
#include<map>
using namespace std ;

map<int, long long> a;

int n;
long long g(int n){
    if(n == 1||n==3) return n;
    auto p = a.find(n);
    if(p != a.end()) return p ->second;
    long long r = 0;
    if(n%2 == 0) r = g(n/2);
    else{
        int m = n / 4;
        if(n % 4 == 1) r = 2 * g(2 * m + 1) - g(m);
        else r = 3 * g(2 * m + 1)- 2 * g(m);
    }
    a[n] = r;
    return r;
}

 int main ( ){
    cout << "Nhap n = " ; cin >> n ;
    cout << "g("<< n <<") = " <<g(n) ;
 }
    