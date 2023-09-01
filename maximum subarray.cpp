#include<bits/stdc++.h>
using namespace std;

int main(){
	int cur_sum;
	int arr[10]={-2,1,-3,4,-1,2,1,-5,4};
	int ans=arr[0];
	int prev_sum=0;
	for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
		cur_sum=prev_sum+arr[i];
		ans=max(ans,cur_sum);
		prev_sum=max(0,cur_sum);
	}
	cout<<"max sum= "<<ans;
	
	return 0;
}
