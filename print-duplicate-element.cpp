#include<iostream>
using namespace std;

void duplicate(int a[],int n,int d,int i){
    int visited[100]={0};
    for(i=0;i<n;i++){
        d=a[i];
    if(visited[d]==0)
        for(int j=i+1;j<n;j++){
           
            if(d==a[j]){
                cout<<a[j];
                visited[a[j]]=1;
    break;          
            }
        }

    }

}
int main(){
    int a[]={5,5,5,5,6,6,10,10};int n=8;int d;int i;
    duplicate(a,n,d,i);
}