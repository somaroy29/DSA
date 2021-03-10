#include<iostream>
using namespace std;

int partition(int a[],int low,int high){
    int pivot=a[high];
    int pIndex=low;
    for(int i=low;i<high;i++){
        if(a[i]<=pivot){
            int temp=a[i];
            a[i]=a[pIndex];
            a[pIndex]=temp;
            pIndex++;
        }
    }
    swap(a[pIndex],a[high]);
    return pIndex;
}

void quicksort(int a[],int low,int high){
    if(low<high){
        int pivot = partition(a,low,high);

        quicksort(a,low,pivot-1);
        quicksort(a,pivot+1,high);
    }
}
int main(){
    int a[6]={2,5,10,7,0,19};
    quicksort(a,0,5);int n=6;
    for(int i=0;i<n;i++){
        cout<<a[i]<<",";
    }

}

