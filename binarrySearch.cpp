#include<iostream>
using namespace std;

int binarySearch(int arr[],int l,int r,int t){
    int m;
    while(l<=r){
        m=l+(r-l)/2;
        if(arr[m]==t){
            return m;
        }
        if (arr[m]<t){
            l=m+1;
        }
        else{
            r=m-1;
        }
    }
}

int main(){
    int arr[]={5,10,15,20,25,30,35,40,45,50};
    int n=10;
    int l=0;
    int r=9;
    int t=40;
    int a=binarySearch(arr,l,r,t);
    cout<<a<<" ";
    return 0;
}
