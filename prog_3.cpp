#include<bits/stdc++.h>
using namespace std;



int main(){
    
    vector<int> arr={ 4 ,4 ,1 ,4 ,4 ,2 ,5 ,6 ,9 ,4 ,4 };
    set<int> set(arr.begin(),arr.end());

    
    for(auto it:set){
        cout<<it<<" ";
    }
    
    
    return 0;
}