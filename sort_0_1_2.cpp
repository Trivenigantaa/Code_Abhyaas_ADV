#include<bits/stdc++.h>
using namespace std;

int main(){
	int nums[10]={1,1,0,0,2,2,2,1,0,0};
	int first=0;
	int last=sizeof(nums)/sizeof(nums[0]);
	int mid=0;
	while(mid<last){
		switch(nums[mid]){
			case 0:
				swap(nums[first++],nums[mid++]);
				break;
			case 1:
				mid++;
				break;
			case 2:
				swap(nums[mid],nums[last--]);
				break;
		}
	}
	for(int i=0;i<last;i++){
		cout<<nums[i]<<" ";
	}
	return 0;
}
