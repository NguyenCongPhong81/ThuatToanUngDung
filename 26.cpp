#include <iostream>
using namespace std;

int k;
int gen(int k, int n){
	if(n==1)
		if(k==1) return 1;
		else return 0;
	int h= k-n;
	if(h==0) return gen(k,n-1)+1;
	else
		if(h<n) return gen(k,n-1)+gen(h,h);
		else return gen(k,n-1)+gen(h,n-1);
}

int main() {
	cout<<"Nhap k = ";cin>>k;
	cout<<"Co tat ca "<<gen(k,k)-1<<" cach phan tich.";
} 
