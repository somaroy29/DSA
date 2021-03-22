#include<iostream>
using namespace std;

int missing(int a[],int total){
    int n=5;
    total=(n+2)*(n+1)/2;
    for(int i=0;i<n;i++){
        total=total-a[i];
    }
    return total;
}
int main(){
    int a[5]={1,2,3,4,6};int n=5;int total;
    int miss=missing(a,total);
    cout<<miss;
}