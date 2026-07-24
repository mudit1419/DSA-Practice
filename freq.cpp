#include<bits/stdc++.h>
using namespace std;

int main(){

    cout<<"Enter the size of array\n";
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    unordered_map<int,int>freq;
    for(int num:v){
        freq[num]++;
    }

    vector<vector<int>>res;
    for(auto &it:freq){
        res.push_back({it.first, it.second});
    }

    sort(res.begin(),res.end());
     for (auto &x : res) {
        cout << x[0] << " -> " << x[1] << endl;
    }
    
    return 0;
}