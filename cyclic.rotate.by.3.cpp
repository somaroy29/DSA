#include<iostream>
using namespace std;

void shifting(int a[],int n,int i){
    int d=3;
    for(int j=0;j<d;j++){
        int temp=a[n-1];
        for(int i=n-2;i>=0;i--){
            a[i+1]=a[i];
        }
        a[0] = temp;
    }
}
int main(){
    int a[5]={7,3,4,2,1};int n=5;int d=3;int i;
    shifting(a,n,i);
    for(int i=0;i<n;i++){
        cout<<a[i]<<",";
    }
}

// 7 3 4 2 1
// 1---
//        4 2

// 7 3 4 2 1
// 1 7 3 4 2
// 2 1 7 3 4
