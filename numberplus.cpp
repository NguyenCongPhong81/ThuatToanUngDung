#include<iostream>
#include<cmath>
using namespace std;

bool check(int *a, int cur, int n){
    for(int i =0; i<n;i++){
        if(a[i] == cur){
            return true;
        }
    }
}
int main(){
    int a[100],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int count = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]<a[j]){
                int temp = a[i];
                a[i]= a[j];
                a[j]=temp;
            }
        }
    }
     int maxDif = floor( ( a[n - 1] - a[0] ) / 4 )  ;
 
    
    for(int i = 0 ; i < n - 4 ; i++){
        
        for(int dif = 1 ; dif <= maxDif ; dif++){
            
            if( a[i]  + 4*dif > a[n -1 ]){
                break;
            }

            
            bool validate = false;
        
            for(int k = 1 ; k <= 4 ; k++){
                int curr = a[i] + dif * k;
                validate = check(a, curr , n );
                if(validate == false){
                    break;
                }

            }
            
            if( validate == true ){
                count += 1;
            }
        }
    }
    
    cout << count ;
    return 0;
}


