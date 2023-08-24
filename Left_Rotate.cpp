#include<bits/stdc++.h>
using namespace std;

void left_Rotate(int arr[],int n){
	int temp=arr[0];
	for(int i=0;i<n-1;i++){
		arr[i]=arr[i+1];
	}
	arr[n-1]=temp;
	
}

int main(){
	int n;
	cout<<"enter the size of an array=";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	left_Rotate(arr,n);
	
	cout<<"To the Resulted array=  ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
