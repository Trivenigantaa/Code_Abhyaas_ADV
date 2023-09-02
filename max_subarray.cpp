#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[10]={-2,1,-3,4,-1,2,1,-5,4};
	int sum=0;
	int i,start,end;
	int max_sum=arr[i];
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++){
		sum=sum+arr[i];
		if(sum<0){
			sum=0;
			start=i+1;
		}
		if(sum>max_sum){
			max_sum=sum;
			end=i;
		}
	}
	cout<<"maximum sum="<<max_sum<<endl;
	cout<<"Corresponding Sub array=";
	for(int i=start;i<=end;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
