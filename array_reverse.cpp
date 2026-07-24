#include<bits/stdc++.h>
using namespace std;

vector<int>reverse(vector<int>&arr){
    int n=arr.size();
    int i=0;
    int j=n-1;

    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

    return arr;
}

int main(){

    cout<<"Enter the size of array:\n";
    int p;
    cin>>p;

    vector<int>v(p);
    for(int i=0;i<p;i++){
        cin>>v[i];
    }

    vector<int>ans=reverse(v);
    for(int x:ans){
        cout<<x<<" ";
    }
    return 0;
}