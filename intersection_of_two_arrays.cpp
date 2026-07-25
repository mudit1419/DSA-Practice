#include<bits/stdc++.h>
using namespace std;

int main(){

    int m,n;
    cout<<"Enter the size of first array:\n";
    cin>>m;
    vector<int>v1(m);
    for(int i=0;i<m;i++){
        cin>>v1[i];
    }

     cout<<"Enter the size of second array:\n";
    cin>>n;
    vector<int>v2(n);
    for(int i=0;i<n;i++){
        cin>>v2[i];
    }

    unordered_set<int>s(v1.begin(),v1.end());
    unordered_set<int>ans;
    for(int x:v2){
        if(s.count(x)){
            ans.insert(x);
        }
    }

    for(auto x:ans){
        cout<<x<<" " ;
    }
    return 0;
}