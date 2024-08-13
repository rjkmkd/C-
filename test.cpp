#include<iostream>
using namespace std;

int main(){
    cout<<"Namaste Duniya"<<endl; 
    int arr[5]={1,2,3,4,5};
    int k=3;
    int newArr[5];
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<len;i++){
        newArr[i]=(i+k)%len;
        cout<<"index: "<<i<<"=>"<< newArr[i]<<endl;
    }
    
    return 0;
}