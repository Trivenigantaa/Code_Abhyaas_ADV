#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cout<<"enter the size of an array=";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements in an array=";
	for(int i=0;i<n-1;i++){
		cin>>arr[i];
	}
	int sum=(n*(n+1))/2;
	for(int i=0;i<n-1;i++){
		sum=sum-arr[i];
	}
	cout<<"Missing number ="<<sum;
	
}
