#include<iostream>
using namespace std;

int main(){
    int k;
    cout<<"enter k : "<<endl;
    cin>> k;
    int arr[] = {2,9,4,1,6,3,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        if(k == arr[i]){
            cout<< i <<endl;
            break;
        }
    }
}