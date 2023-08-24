#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,temp;
	cout<<"enter array size="<<endl;
	cin>>n;
	int a[n];
	cout<<"enter array elements="<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int max[2]={-1001,-1001};
	int min[2]={1000,1000};
	for(int i=0;i<n;i++){
		if(a[i]>max[0]){
			max[1]=max[0];
			max[0]=a[i];
			
		}else if(a[i]>max[1]){
			max[1]=a[i];
		}
		
		if(a[i]<min[0]){
		    min[1]=min[0];
			min[0]=a[i];
		}
		else if(a[i]<min[1]){
			min[1]=a[i];
	}
	
}
cout<<"second largest element = "<<max[1]<<endl;
cout<<"second smallest element = "<<min[1]<<endl;
	return 0;
}

