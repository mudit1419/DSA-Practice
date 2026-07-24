#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v(5,1);
    cout<<"Size="<<v.size()<<endl;
    cout<<"Capacity= "<<v.capacity()<<endl;
    cout<<"Elements are: "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    v.push_back(5);
     for(int i:v){
        cout<<i<<" ";
    }
    cout<<"Capacity= "<<v.capacity()<<endl;
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    pop_out()
     return 0;
}