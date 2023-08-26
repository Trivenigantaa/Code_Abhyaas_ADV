#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,num,i,count=0;
	cout<<"enter the size of an array=";
	cin>>n;
	int a[n];
	cout<<"enter the array elements=";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"enter the number to search = ";
	cin>>num;
	
	for(i=0;i<n;i++){
		if(a[i]==num){
			count++;
			break;
		}
	}
	if(count>0){
		cout<<"The number "<<num<<" is present in the array at the index of "<<i;}
	else{
		cout<<"The number is not present in the array";
	}
	return 0;
}
