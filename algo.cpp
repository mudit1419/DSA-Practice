#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);

    cout<<"Elements are: "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<binary_search(v.begin(),v.end(),6);
    cout<<"FInding->6 " <<binary_search(v.begin(),v.end(),6);

    int a=5;
    int b=6;

    swap(a,b);
    cout<<endl<<"a="<<a;

    string p = "abcd";
    reverse(p.begin(), p.end());
    cout<<"String "<<p;

    rotate(v.begin(),v.begin()+1,v.end());
    cout<<endl<<"After rotation"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    
    cout<<endl;
    sort(v.begin(),v.end());
     for(int i:v){
        cout<<i<<" ";
    }

    return 0;
}