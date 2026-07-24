#include<bits/stdc++.h>
using namespace std;

int main(){

   int x;
    cout<<"Give the size of array:"<<endl;
    cin>>x;
    int arr[x];

    for(int i=0;i<x;i++){
        cin>>arr[i];
    }

    int min=arr[0];
    int max=0;

    for(int i=1;i<x;i++){
        if(arr[i]<min){
            min=arr[i];
        }

        int profit=arr[i]-min;
        if(profit>max){
            max=profit;
        }
    }

    cout<<max;

    return 0;
}