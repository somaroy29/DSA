#include<iostream>
using namespace std;

void sorting(int a[],int n){
    
    for(int j=0;j<n-1;j++){
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                swap(a[i],a[i+1]);
            }
        }
    }
}
int main(){
    int a[7]={-13,-9,1,-2,-2,-1,-5};int n=7;
    sorting(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<",";
    }
    
}