#include<bits/stdc++.h>
using namespace std;
void rec(int n,int arr[],int i){
    if(i==n){
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        return ;
    }
    arr[i] = 0;
    rec(n,arr,i+1);
    arr[i] = 1;
    rec(n,arr,i+1);
    arr[i] = 2;
    rec(n,arr,i+1);
}
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    rec(n,arr,0);
}