#include<bits/stdc++.h>
using namespace std;

vector<int>getMinMax(vector<int>&arr){
    int minval=arr[0];
    int maxval=arr[0];

    for(int i=0;i<arr.size();i++){
        if(arr[i]<minval){
            minval=arr[i];
        }

        if(arr[i]>maxval){
            maxval=arr[i];
        }
    }

    return{minval,maxval};
}

int main(){

    cout<<"Enter the size of array\n";
    int p;
    cin>>p;
    vector<int>v(p);
    for(int i=0;i<p;i++){
        cin>>v[i];
    }

    vector<int>n=getMinMax(v);
    for(int x:n){
        cout<<x<<" ";
    }
    return 0;
}
