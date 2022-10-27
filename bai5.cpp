#include <iostream>

using namespace std;

long long fn ( long n){
	long long temp;
	if(n==1) return 1;
	if(n==3) return 3;
	if(n%2==0)
	{
		temp = n/2;
		return fn(temp);
	 } 
	if(n%4==1){
		temp = (n-1)/4;
		return 2*fn(2*temp+1) - fn(temp);
	}
	if(n%4==3){
		temp = (n-3)/4;
		return 3*fn(2*temp+1) - 2*fn(temp);
	}
}
int main()
{
	long long n ;
	cout<<"Nhap n = "; cin>>n;
	while(n<=0){
		cout<<"Nhap n = "; cin>>n;
	}
	cout<<"g("<<n<<") = "<<fn(n);
return 0;
}


