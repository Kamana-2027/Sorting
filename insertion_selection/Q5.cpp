//Given an array of strings arr[] with all strings in lowercase. Sort given strings using Bubble Sort and display the sorted array.

#include<bits/stdc++.h>
 using namespace std;
 int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    string arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //bubble sort

    for(int i=0;i<n-1;i++){

        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


 }