#include <iostream>
#include <math.h>
 
using namespace std;
 
bool scp(int n){
    int sqr = sqrt(n);
    return (sqr*sqr == n);
}
 
int main(){
    
    int n;
    do{
        cout << "\nNhap n = ";
        cin >> n;
    }while(n <= 0);
    
    int a[n];
    
    for(int i = 0;i < n;i++) cin >> a[i];
    
    cout << "\nCac so chinh phuong:\n";
    
    for(int i = 0;i < n; i++){
        if(scp(a[i])){
            cout << a[i] << "    ";
            // Neu muon in chi so cua cac so chinh phuong, bo comment dong duoi day
//            cout << i << "\n";
        }
    }
}