#include<iostream>
using namespace std;

int linearSearch(int arr[],int n,int t){
    for(int i=0;i<n;i++){
        if(arr[i]==t){
            return i;
        }
    }
    return -1;
}

int main(){

    int arr[]={5,40,15,20,25,50};
    int n=sizeof(arr) / sizeof(arr[0]);
    int t=50;
    int a=linearSearch(arr,n,t);
    cout<<a<<" ";
    return 0;
    }

