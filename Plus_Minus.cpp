#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0; i<n; i++){
    cin>>arr[i];
}
int v1 = 0;
for(int i=0; i<n; i++){
    if(arr[i] > 0){
        v1 = v1 + 1;
    }
}
int v2 = 0;
for(int i=0; i<n; i++){
    if(arr[i] < 0){
        v2 = v2 + 1;
    }
}
int v3 = 0;
for(int i=0; i<n; i++){
    if(arr[i] == 0){
        v3 = v3 + 1;
    }
}
/*float k1 == v1/n;
float k2 == v2/n;
float k3 == v3/n;
cout << fixed << setprecision(6)<<k1<<endl;*/
// cout<<v1<<" "<<v2<<" "<<v3<<" "<<endl;
cout<<fixed<<setprecision(6);
cout<<double(v1/(double)n)<<endl;
cout<<double(v2/(double)n)<<endl;
cout<<double(v3/(double)n)<<endl;
    return 0;
}