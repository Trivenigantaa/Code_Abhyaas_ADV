#include<bits/stdc++.h>
using namespace std;

int main(){
	//for input the array
	int n,count=0,max_count=0;
	cout<<"enter the array size=";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	//to count no.of consecutive one's in an array
	for(int i=0;i<n;i++){
		if(a[i]==1){
			count++;
		}
		if(a[i]!=1){
			count=0;
		}
		max_count=max(max_count,count);	
	}
	cout<<"Maximum no.of consecutive one's in an array ="<<max_count;
}
