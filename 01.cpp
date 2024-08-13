#include <iostream>
using namespace std;

int main()
{
	int arr[5]={10,20,30,40,50};
//	arr[0]=90;
//	cout<< arr[0] <<endl;
//	cout<< arr[-5]<<endl;
//	cout<< arr[8]<<endl;
	cout<< sizeof(arr)<<endl;
//	printing array elements using for loop
//	for (int i=0;i<5;i++)
//	{
//		cout<<arr[i]<<endl;
//	}
	
	//printing array elements using for each loop
	for(int x:arr)
	{
		cout<<x<<endl;
	}
//	printf("%d",arr[0]);
	return 0;
}

