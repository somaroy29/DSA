#include<iostream>
using namespace std;
void maximum(int a[],int i,int n){
    int m1=a[0];int m2=a[0];
    for(i=0;i<n;i++){
        if(m1<a[i]){
            m1=a[i];
        }
    }
    // cout<<m1;
    for(i=0;i<n;i++){
        if(m2<a[i] && a[i]<m1){
            m2=a[i];
        }
    }
    // cout<<m2;
    cout<<m1+m2<<endl;
}
int main(){
    int a[7]={1,0,3,8,7,19,15};int i;int n=7;
    maximum(a,i,n);
    
}