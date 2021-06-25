#include <stdio.h>
int max(int a, int b){
    if(a>b){
        return a;
    }
    return b;
}


int min(int a, int b){
    if(a<b){
        return a;
    }
    return b;
}

int rec(int i, int arr[]){
    if(i<0){
        return 0;
    }
    if(i==0){
        return arr[i];
    }
    int val1 = arr[i] + min(rec(i-2, arr), min(rec(i-3, arr), rec(i-4, arr)));
    int val2 = arr[i] + arr[i-1] + min(rec(i-3, arr), min(rec(i-4, arr), rec(i-5, arr)));
    int val3 = arr[i] + arr[i-1] + arr[i-2] + min(rec(i-4, arr), min(rec(i-5, arr), rec(i-6,arr)));

    return max(val1, max(val2, val3));
}
int main() {
    int n;
    scanf("%d",&n);
    int arr[2000];
    
    for(int i=0; i<n; i++)
{ scanf("%d",&arr[i]);}
printf("%d",rec(n-1,arr));
return 0;
   
}