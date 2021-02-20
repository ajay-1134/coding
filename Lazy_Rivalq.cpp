#include<bits/stdc++.h>
using namespace std;
#define int long long int
int dist(int x1,int y1,int x2,int y2){
    int res = abs(x2-x1) + abs(y2-y1);
    return res;
}

signed main(){
    int n;
    cin>>n;
    int x[n],y[n];
    int arrsum =  99999;
    for(int i=0; i<n; i++){
        cin>>x[i]>>y[i];
    }
    int arr[n];
    for(int i=0; i<n; i++){
        int prvsum = 0;
        for(int j=0; j<n; j++){
            arr[j] = dist(x[i],y[i],x[j],y[j]);
            prvsum += arr[j];
        }

        arrsum = min(arrsum,prvsum);
    }
    cout<<arrsum<<endl;
    return 0;
}