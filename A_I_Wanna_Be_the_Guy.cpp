#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1000000007;
#define PI 3.1415926535897932384626


signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin>>n;
    int n1;
    cin>>n1;
    int arr1[n];
    for(int i=0; i<n1; i++){
        cin>>arr1[i];
    }
    int n2;
    cin>>n2;
    int arr2[n];
    for(int i=0; i<n2; i++){
        cin>>arr2[i];
    }
    if(n1 == 0 && n2 == 0){
        cout<<"Oh, my keyboard!"<<endl;
    }
    else{
        int arr[n1+n2];
        int j=0, k=0;
        for(int i=0; i<n1+n2; i++){
            if(i<n1){
                arr[i] = arr1[j];
                j++;
            }
            else{
                arr[i] = arr2[k];
                k++;
            }
        }

        sort(arr,arr+(n1+n2));
        int flag = 0;
        if(arr[n1+n2-1] < n || arr[0] != 1){
            flag = 1;
        }
        for(int i=0; i<n1+n2-1; i++){
            if(arr[i+1] - arr[i] > 1){
                flag = 1;
            }
        }
        // for(int i=0; i<n1+n2; i++){
        //     cout<<arr[i]<<" ";
        // }
        // cout<<endl;
        if(flag == 0){
            cout<<"I become the guy."<<endl;
        }
        else{
            cout<<"Oh, my keyboard!"<<endl;
        }
    }
    return 0;
}