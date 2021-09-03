#include "bits/stdc++.h"
using namespace std;

void FileInp()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

int main()
{
    FileInp();

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }

    sort(arr,arr+n);
    cout<< arr[0]<<" ";
    cout<< arr[n-1];
    return 0;
}

