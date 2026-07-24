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

    int i=0;
    while(i<x&&arr[i]!=0){
        i++;
    }
     if(i==x) return 0;

    int j=i+1;
    while(j<x){
        if(arr[j]==0){
            j++;
        }
        else{
            swap(arr[i],arr[j]);
            i++;
            j++;
        }
    }

    for(int i=0;i<x;i++){
        cout<<arr[i];
    }
    

    return 0;
}