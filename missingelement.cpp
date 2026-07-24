#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cout<<"Enter the size of array\n";
    cin>>n;
    int arr[n];
    int sum=0;

    for(int i=0;i<n-1;i++){
        cin>>arr[i];
        sum=sum+arr[i];
    }

    int total=(n*(n+1))/2;
    int miss=total-sum;

    cout<<"The missing number is :"<<miss<<endl;

    return 0;
}