#include <algorithm>
#include<iostream>
using namespace std;
const int MAX = 8;
int s[MAX] = { 0, 1, 3, 3, 4, 5, 6, 8 };
int f[MAX] = { 6, 4, 5, 8, 7, 9, 10, 11 };
int a[MAX];
bool sapxep(int i, int j) { return f[i] < f[j]; }
int main() {
    for (int i = 0; i < MAX; i++) a[i] = i;
    sort(a+0, a+MAX, sapxep);
    cout<<"Mang A sau khi sap xep ";
    for (int i = 1; i < MAX; i++) cout<< " "<<a[i];
    cout<<"\nChon cac cuoc hop sau: "<<a[0];
    
    
    int e = f[a[0]];
    for (int i = 1; i < MAX; i++)
    if (e <= s[a[i]]) {
    cout << " " << a[i];
    e = f[a[i]];
    }
}