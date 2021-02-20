#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1000000007;
#define PI 3.1415926535897932384626

int checker(string s1,string s2){
    string s3 = s1;
    string s4 = s2;
    swap(s1[0],s2[0]);
    if(s1 == s3 || s1 == s4|| s2 == s3 || s2 == s4){
        return 0;
    }
    return 1;
}

int check(string s1,int n, string arr[]){
    for(int i=0; i<n; i++){
        if(arr[i] == s1){
            return 0;
        }
    }
    return 1;
}

int check_char(char arr[],char ch,int n){
    for(int i=0; i<n; i++){
        if(arr[i] == ch){
            return 0;
        }
    }
    return 1;
}

int check_str(string arr[],string s ,int n){
    for(int i=0; i<n; i++){
        if(arr[i] == s){
            return 0;
        }
    }
    return 1;
}

int fact(int n){
    if(n==0){
        return 1;
    }
    int f=1;
    for(int i=1; i<=n; i++){
        f *= i;
    }
    return f;
}

signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        string arr[n];
        string arr1[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
            arr1[i] = arr[i];
        }
        char a[26];
        int j=0;
        for(int i=0; i<n; i++){
            if(check_char(a,arr[i][0],26) == 1){
                a[j] = arr[i][0];
                j++;
            }
        }
        int num=0;
        int x= n*j;
        string array[x];
        for(int i=0; i<n; i++){
            for(int k=0; k<j; k++){
                arr[i][0] = a[k];
                // cout<<arr[i]<<" ";
                if(check(arr[i],n,arr1) && check_str(array,arr[i],num) ){
                    array[num]= arr[i];
                    num++;
                }
            }
        }
        // cout<<endl<<num<<endl;
        int res = num;
        for(int i=0; i<num; i++){
            cout<<array[i]<<" ";
        }
        cout<<endl;
        int count = 0;
        for(int i=0; i<res; i++){
            for(int k=i+1; k<res; k++){
                if(checker(array[i],array[k])){
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}