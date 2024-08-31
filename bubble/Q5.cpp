//Check if the given array is almost sorted. (elements are at-most one position away)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter size:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int brr[n];
    for(int i=0;i<n;i++){
        brr[i]=arr[i];
    }

    //bubble sort

    for(int i=0;i<n-1;i++){
        bool flag=true;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag=true;
            }
        }
        if(flag==true) break;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    bool flag=true;//almost sorted
    for(int i=0;i<n;i++){
        if(i==0){
            if(brr[i]!=arr[i] && brr[i]!=arr[i+1]){
                flag=false;
                break;
            }
        }
        else if(i==n-1){
            if(brr[i]!=arr[i] && brr[i]!=arr[i-1]){
                flag=false;
                break;
            }
        }
        else {
            if( brr[i]!=arr[i+1]&& brr[i]!=arr[i] && brr[i]!=arr[i-1]){
                flag=false;
                break;
            }
        }
    }
    cout<<endl;
    if(flag==true) cout<<"true";
    else cout<<"false";


}