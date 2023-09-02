#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cout<<"enter the size of an array=";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int max=arr[n-1];
	cout<<"leaders of elements=";
	cout<<max<<" ";
	for(int i=n-1;i>=0;i--){
		if(arr[i]>max){
			max=arr[i];
			cout<<max<<" ";
		}
		
	}
	return 0;
}
