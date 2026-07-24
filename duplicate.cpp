#include<bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int>&nums){
    int n=nums.size();

    for(int i=0;i<n;i++){
        int target=nums[i];
        int count=0;
    for(int j=0;j<n;j++){
        if(nums[j]==target){
            count++;
        }
        if(count>=2){
            return target;
        }
       
    }
}
}

int main(){
    int n;
    cout<<"Enter the size of array :\n";
    cin>>n;

    vector<int>arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int duplicate=findDuplicate(arr);
    cout<<duplicate<<endl;


    return 0;
}
