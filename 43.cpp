#include<bits/stdc++.h>
using namespace std;

int n,a[100001],dem=1;

void Input(){
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
}

void Output(){
	for(int i=2;i<=n;i++){
		if(a[i]<=a[i-1])
			dem++;
	}
	cout<<dem;
} 

int main()
{
	Input();
	Output();
	return 0;
}
