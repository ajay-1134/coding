#include<bits/stdc++.h>
using namespace std;
#define int long long int

int bs(vector<int>arr, int k){
    int n = arr.size();
    int start = 0;
    int end = (n-1);
    
    sort(arr.begin(), arr.end());
    while(start <= end){
        int mid = (start+end)/2;
        if(arr[mid] == k){
            return 1;
        }
        else if(arr[mid] > k){
            end = mid - 1; 
        }
        else{
            start = mid + 1;
        }
    }
    return 0;
}

int ls(vector<int>arr,int k, int n){
    for(int i=0; i<n; i++){
        if(arr[i] == k){
            return 1;
        }
    }
    return 0;
}
signed main(){
    int n,k; 
    cin>>n>>k;
    vector<int>arr;
    for(int i=0; i<n; i++){
        int val;
        cin>>val;
        arr.push_back(val);
    }
    if(ls(arr,k,n)){
        cout<<"Exist"<<endl;
    }
    else{
        cout<<"Does not exist"<<endl;
    }
    if(bs(arr,k)){
        cout<<"Exist"<<endl;
    }
    else{
        cout<<"Does not exist"<<endl;
    }
    return 0;
}