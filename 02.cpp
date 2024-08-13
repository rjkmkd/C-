#include<iostream>
using namespace std;

int main(){
    int n,arr[n];
    cout<<"Enter size of array: "<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter your elements"<<endl;
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
	{
    	cout<<arr[i]<<endl;                          
	}
    
    return 0;

}
