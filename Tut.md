# Let's learn Array
## Definition
**Array** :  Array is a continguous block of memory.<br>
**Properties** <br>
+ Array size is fixed.
+ It has contiguous blocks.
+ Indexing start from ```0```.
+ Maximum size of array can be ```2*10^6``` (Approximately).
+ Array can contains ```int, char, string, float, double``` type of value.

## Represntation
```c++
// Method - 1
int arr[SIZE]; 

// Method 2
int arr[] = {1, 2, 4, 5, 6};

// Types of arrays
int arr[SIZE];
char arr[SIZE];
string arr[SIZE];
float arr[SIZE];
double arr[SIZE];

// Initialisation in array
int arr[] = {1, 2, 4, 5, 6, 7};
char arr[] = {'1', 'a', 'A', '#', '['...........};
string arr[] = {"Ajay", "Singh", "Ajay", "reclone"};
double arr[] = {1.0, 1.2, 1.233};


// Size of Array
int sz = sizeof(ARRAY_NAME)/arr[0];


```

# Demo
```c++
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
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // Last element 
    int last  = arr[n-1];

    // First element
    int start = arr[0];

    // ith value - arr[i-1];
    return 0;
}
```