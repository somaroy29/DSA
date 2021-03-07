#include<iostream>
using namespace std;

void sorting(int a[],int n){

    for(int j=0;j<n-1;j++){
        for(int i=j+1;i>0;i--){
            if(a[i]>a[i-1]){
                int temp=a[i];
                a[i]=a[i-1];
                a[i-1]=temp;
            
            }
        }
    }
}
int main(){
    int a[6]={10,3,1,2,8,5};int n=6;int j;
    sorting(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<",";
    }
}