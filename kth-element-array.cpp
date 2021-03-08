#include<iostream>
using namespace std;
void kthelement(int a[],int i,int n,int k,int j){
    // int start=a[0];
    for(j=0;j<k;j++){
        int start=a[0];
        for(i=0;i<n;i++){
            if(start>a[i]){
                start=a[i];
            }
        }
        cout<<start<<endl;
    }   
}
int main(){
    int a[]={2,6,4,8,5};int i;int n=5;int j;int k=3;
    kthelement(a,i,n,k,j);
}