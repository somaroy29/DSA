#include<iostream>
using namespace std;

void revarray(int a[],int temp[],int n){
    int j=0;
    for(int i=n-1;i>=0;i--){
        temp[j++]=a[i];
    }
}
int main(){
    int a[]={1,2,3,4,5};int temp[5];int n=5;int i;
    revarray(a,temp,n);
    for(int i=0;i<n;i++){
        cout<<temp[i]<<",";
    }
 return 0;
}