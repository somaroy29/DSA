#include<iostream>
using namespace std;
void sorting(int a[],int low){
    int i;int sort;int n=6;low=0;
    while(low!=3){
        for(i=0;i<n;i++){
            if(a[i]==low){
                cout<<a[i];

            }
        }
        low++; 
    }
}

int main(){
    int a[6]={1,0,2,2,0,1};int n=6;int low;
    sorting(a,low);

}