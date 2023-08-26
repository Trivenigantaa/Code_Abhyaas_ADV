#include<bits/stdc++.h>
using namespace std;

int main()
{
	bool asc_sorted=true,desc_sorted=true;
	int n;
	cout<<"enter the size of the array=";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]>a[i+1]){
			asc_sorted=false;	
		}
		if(a[i]<a[i+1]){
			desc_sorted=false;	
		}
		
	}
	if(asc_sorted==true){
		cout<<"The array is in ascending order";
	}
	else if(desc_sorted=true){
		cout<<"The array is in descending order";
	}
	else{
		cout<<"The array is not sorted";
	}
return 0;	
}
