#include<bits/stdc++.h>
using namespace std;



int main(){
    
    vector<int> arr={1 ,2 ,2 ,2 ,4 ,4 ,4 ,5 ,6 ,7 ,8 ,8 ,8 ,2 ,2 ,2 };
    
    map<int,int> arr1;
    
    for(auto it:arr){
        arr1[it]++;
    }
    
    for(auto it:arr1){
        cout<<it.first<<" = "<<it.second<<endl;
    }
    
    
    return 0;
}