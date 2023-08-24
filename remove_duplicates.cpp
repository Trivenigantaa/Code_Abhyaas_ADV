//removing duplicate elements in a sorted array
#include<bits/stdc++.h>
using namespace std;

void duplicate_remov(int a[],int &n){
	int i=0,j;
	for(j=1;j<n;j++){
		if(a[i]!=a[j])
		{
			i++;
		    a[i]=a[j];
		}
		
	}
	
	n=i+1;
}

int main()
{
	int n;
	cout<<"enter the array size=";
	cin>>n;
	int a[n];
	cout<<"enter the elements into the array in sorted form= "<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	duplicate_remov(a,n);
	
	
	cout<<"To print a resulted array="<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
