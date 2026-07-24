#include<bits/stdc++.h>
using namespace std;

int majority(vector<int>&arr){
    int candidate=arr[0];
    int count=1;
    int n=arr.size();

    for(int i=1;i<n;i++){
        if(arr[i]==candidate){
            count++;
        }
        else{
            count--;
        }

        if (count==0){
            candidate=arr[i];
            count=1;
        }
    }

    count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==candidate){
            count++;
        }
    }

    if(count>n/2){
        return candidate;
    }

    return -1;
}

int main(){

    vector<int> arr={1,1,2,2,2,2,2,2,2,1,3,5,1};
    cout << majority(arr) << endl;
    return 0;
}