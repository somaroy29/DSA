<<<<<<< HEAD
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
    int a[6]={-10,1,1,2,6,8};int n=6;
    sorting(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<",";
    }
    
=======
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
    int a[6]={0,0,1,2,1,0};int n=6;
    sorting(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    
>>>>>>> 12536937218971123f1fc3e9cec6f5fc51115941
}