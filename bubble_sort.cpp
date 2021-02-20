#include<bits/stdc++.h>
using namespace std;
void badla(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
 int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    bool swapped;
    for(int i=0; i<n; i++){
        swapped  = false;
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false){
            break;
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" "<<endl;
    }
    return 0;
 }
