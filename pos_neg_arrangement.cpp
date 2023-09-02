#include<bits/stdc++.h>
using namespace std;

int main(){
	int pos=0;
	int neg=1;
	int n;
	cout<<"enter the size of an array=";
	cin>>n;
	int arr[n];
	int arr1[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		if(arr[i]>0){
			arr1[pos]=arr[i];
			pos=pos+2;
		}
		else{
			arr1[neg]=arr[i];
			neg=neg+2;
		}
	}
	cout<<"Result=";
	for(int i=0;i<n;i++){
		cout<<arr1[i]<<" ";
	}
}
