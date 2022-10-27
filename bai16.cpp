#include<iostream>
using namespace std;



int main(int argc, char *argv[])
{
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	
	int max = 1;
	int count = 1;
	int num = 1;
	for( int i = 0 ; i < n ; i++){
		for(int j = i + 1 ; j < n ; j++){
			if( arr[j] == arr[i] + num){
				count++;
				num++;
			}
			
			if( j == n-1){
				if(count > max){
					max = count;
				}
				
				num = 1;
				count = 1;
			}
		}
	}

	cout << max;

}