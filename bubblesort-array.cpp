#include<iostream>
using namespace std;

void bubblesort(int a[],int n){
    int i;
    for(int j=0;j<n-1;j++){
        for(i=0;i<n-1;i++){
            if(a[i]<a[i+1]){
                swap(a[i],a[i+1]);
            }
    
        }
    }
}
int main(){
        int a[6]={2,10,1,7,6,5};int n=6;int i=0;
        bubblesort(a,n);
        for(i=0;i<n;i++){
            cout<<a[i]<<endl;
        }
 return 0;
}

