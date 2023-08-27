#include<iostream>
#include<unordered_set>
using namespace std;


void union_of_two_arrays(int a[],int b[])
{
	unordered_set<int>unionSet;
	for(int i=0;i<n;i++){
		unionSet.insert(a[i]);
	}
	for(int i=0;i<m;i++){
		unionSet.insert(b[i]);
	}
	
}


int main() {
    int n,key;
    cout<<"Enter array Size=";
    cin>>n;
    int a[n];
    cout<<"enter array elements in 1st arrray=";
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    cout<<"Enter the 2nd array size=";
    cin>>m;
    int b[m];
    cout<<"enter array elements in 2nd arrray=";
    for(int i=0;i<m;i++) {
        cin>>b[i];
    }
    union_of_two_arrays(a,b);
    for(int num:unionSet){
    	cout<<num<<" ";
	}
	return 0;
