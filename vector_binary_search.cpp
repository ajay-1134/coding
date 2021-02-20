#include<bits/stdc++.h>
using namespace std;

// Condition : Vector is sorted
// Time complexity : O(logn)
int bs(vector<int>arr, int key){
    int n = arr.size();
    int start = 0;
    int end = n - 1;
    while(start <= end){
        // int mid = (start + end)/2;
        int mid = start + (end - start)/2;
        if(arr[mid] == key){
            return 1;
        }
        else if(arr[mid] > key){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return 0;
}

// O(n)
int ls(vector<int>arr, int key){
    int n = arr.size();
    for(int i=0; i<n; i++){
        if(arr[i] == key){
            return true;
        }
    }
    return false;
}

int main()
{
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0; i<n; i++){
        int val;
        cin>>val;
        arr.push_back(val);
    }
    sort(arr.begin(), arr.end());
    int key;
    cin>>key;
    if(bs(arr, key)){
        cout<<"Exist"<<endl;
    }
    else{
        cout<<"Does not exist"<<endl;
    }
    return 0;
}