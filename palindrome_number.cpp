#include<iostream>
using namespace std;

int main(){
    int start=0;string a;
    int n;
    cin>>n;
    int end=n-1;
    cin>>a;
    while(start>end){
        if(a[start]!=a[end]){
            cout<<"not palindrome";
            return 0;
        }
        start++;
        end--;
    }
    cout<<"palindrome";
}
