#include<bits/stdc++.h>
using namespace std;
int main(){
int n; 
cin>>n;
int matrix[n][n],i,j;
for(i=0; i<n; i++){
    for(j=0; j<n; j++){
        cin>>matrix[i][j];
    }
    
}
int sum1 = 0;
for(i=0; i<n; i++){
    for(j=0; j<n; j++){
        if(i-j == 0){
            sum1 = sum1 + matrix[i][j];
        }
    }
}
int sum2 = 0;
for(i=0; i<n; i++){
    for(j=0; j<n; j++){
        if(i+j == n-1){
            sum2 = sum2 + matrix[i][j];
        }
    }
}
// cout<<sum1<<" "<<sum2<<endl;
 cout<<abs(sum1 - sum2)<<endl;

    return 0;
}