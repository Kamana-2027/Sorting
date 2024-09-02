//1) options a b c are correct

//2)d option

//3)c option

//4)Given an array of digits (values are from 0 to 9), the task is to find the minimum possible sum of two numbers formed from digits of the array. Please note that all digits of the given array must be used to form the two numbers.

#include<bits/stdc++.h>
using namespace std;
int main(){
    // int arr[]={5,1,5,5,2,3};
    int n;
    cout<<"enetr size:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //find mininmun mumber by sorting
    for(int i=1;i<n;i++){
        int j=i;
        while(j>=1&&arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //converting array into integer
    int a=0;
    for(int i=0;i<n;i++){
        a=a*10;
        a=a+arr[i];
    }
    cout<<a;
    cout<<endl;
    //find second minimum number 
    for(int i=n-1;i>=1;i--){
        if(arr[i]!=arr[i-1]){
            swap(arr[i],arr[i-1]);
            break;
        }
    }
    //converting array into integer
    int b=0;
    for(int i=0;i<n;i++){
        b=b*10;
        b=b+arr[i];
    }
    cout<<b;
    cout<<endl;
    cout<<"mini sum:"<<a+b;
}