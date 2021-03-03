#include<iostream>
using namespace std;
void selectionsort(int a[],int i,int n,int j){
    for(i=0;i<n-1;i++){
        int min=i;
        for(j=i+1;j<n;j++){
            if(a[min] > a[j]){
                min=j;
            }
        }
        int temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
}
int main(){
    int a[6]={2,4,1,5,9,7};int n=6;int i;int j;int temp;
    selectionsort(a,i,n,j);
    for(i=0;i<n;i++){
        cout<<a[i]<<",";
     
    }
 return 0;
}