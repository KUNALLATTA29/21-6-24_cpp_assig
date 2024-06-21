#include<bits/stdc++.h>
using namespace std;



int main(){
    
    vector<int> arr={1 ,2 ,4 ,1, 5 ,1 ,6 ,2 ,1 ,9 ,1};
    
    int index = 0;
    
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=1){
            arr[index++]=arr[i];
        }
    }
    for(int i=index;i<arr.size();i++){
        arr[i]=1;
    }
    
    for(auto it:arr){
        cout<<it<<" ";
    }
    return 0;
}