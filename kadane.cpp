#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter the size of array:\n";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int currentSum=arr[0];
    int maxSum=arr[0];

    for(int i=1;i<n;i++){
        currentSum=max(arr[i],arr[i]+currentSum);
        maxSum=max(currentSum,maxSum);

    }

    cout<<"The maximum sum is : "<<maxSum;
    return 0;
}