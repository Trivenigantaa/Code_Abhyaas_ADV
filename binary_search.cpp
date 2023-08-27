#include<bits/stdc++.h>
using namespace std;

int binary_Search(int a[],int first,int last,int key){
	if(last>=first){
		int middle=(first+last)/2;
		if(a[middle]==key){
			return middle+1;
		}if(a[middle]>key){
			return binary_Search(a,first,middle-1,key);
		}
		return binary_Search(a,middle+1,last,key);
	}
	return -1;
}

int main() {
    int n,key;
    cout<<"Enter array Size=";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    cout<<"Enter key value=";
    cin>>key;
    int first=0;
    int last=n-1;
    int result=binary_Search(a,0,n-1,key);
    if(result!=-1){
    	cout<<"element "<<key<<" found at "<<result;
	}
	return 0;
}
