#include<iostream>
using namespace std;
void maxheap(int a[],int n,int i){
    int root=i;
    int left=2*i+1;
    int right=2*i+2;
    if (left < n && a[left] > a[root]) 
        root = left; 
    if (right < n && a[right] > a[root]) 
        root = right; 
    if (root != i) { 
        swap(a[i], a[root]);
        maxheap(a, n,root); 
    }
}
void buildHeap(int arr[], int n) 
{
    int start = (n / 2) - 1;
    for (int i = start; i >= 0; i--) { 
        maxheap(arr, n, i); 
    } 
} 
  
int main(){
     int a[] = {1,5,8,13,7};int n=5;int i;
    maxheap(a, n,i);
    buildHeap(a,n);
    for(i=0;i<n;i++){
        cout<<a[i];
    }
    return 0; 
} 
