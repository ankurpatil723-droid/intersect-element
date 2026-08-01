#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n,m;
    vector<int> temp;
    cout<<"enter the following the arr1size and array2 size:"<<endl;
    cin>>n>>m;
    int arr1[n], arr2[m];
    cout<<"enter the elements of the first array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cout<<"enter the elements of the second array:"<<endl;
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        if(arr1[i]==arr2[j]){
            temp.push_back(arr1[i]);
            break;
        }
    }
}
        for(int i=0;i<temp.size();i++){
            cout<<temp[i]<<" ";
        }
return 0;
}
