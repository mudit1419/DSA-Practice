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

    int largest=-1;
    int sec_largest=-1;

    for(int i=0;i<x;i++){
        if(arr[i]>largest){
            sec_largest=largest;
            largest=arr[i];
        }
        else if(arr[i]>sec_largest&&arr[i]!=largest){
            sec_largest=arr[i];
        }
    }


     cout<<sec_largest;
    
    
    return 0;
}