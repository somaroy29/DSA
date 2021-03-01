#include<iostream>
using namespace std;
void min(int a[],int i,int n){
    int start=a[0];
    for(i=0;i<n;i++){
        if(start>a[i]){
            start=a[i];
        }
    }
    cout<<start<<endl;
}
int main(){
    int a[]={1,2,8,6,7};int i;int n=5;
    min(a,i,n);
 return 0;
}