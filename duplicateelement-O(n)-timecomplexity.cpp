#include<iostream>
using namespace std;

void duplicate(int a[],int n,int d,int i){
    int visited[100]={0};
    for(i=0;i<n;i++){
        d=a[i];
    if(visited[d]!=1)
            cout<<a[i];
            visited[d]=1;
    }
}
int main(){
    int a[]={5,5,7,7,6,6,10,10};int n=8;int d;int i;
    duplicate(a,n,d,i);
}