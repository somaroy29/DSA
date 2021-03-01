#include<iostream>
using namespace std;
void max(int a[],int i,int n){
    int start=a[0];
    for(i=1;i<n;i++){
        if(start<a[i]){
            start=a[i];
        }
    }
    cout<<start<<endl;
}
int main(){
    int a[]={5,2,9,6,7};int i;int n=5;
    max(a,i,n);
    // for(i=0;i<=n;i++){
    //     cout<<a[i]<<endl;
    // }
 return 0;
}