#include<bits/stdc++.h>
using namespace std;



int main(){
    
    int a,b,c;
    cin>>a>>b>>c;
    
    vector<int> arr;
    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);
    
    for(int i=3;i<=6;i++){
        arr.push_back(arr[i-1]+arr[i-2]+arr[i-3]);
    }
    
    for(auto it:arr){
        cout<<it<<" ";
    }
    
    return 0;
}