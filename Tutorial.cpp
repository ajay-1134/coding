#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];// Integer type
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    // print array values.
    
    int mn = INT_MAX;
    for(int i=0; i<n; i++){
        if(arr[i] < mn){
            mn = arr[i];
        }
        
       
    }
    
    cout<<mn<<endl;
    return 0;
}