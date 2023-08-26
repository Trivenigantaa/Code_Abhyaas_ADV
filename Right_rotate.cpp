#include<bits/stdc++.h>
using namespace std;

void reverse(int a[],int st,int en){
	int temp;
	while(st<=en){
		temp=a[st];
		a[st]=a[en];
		a[en]=temp;
		st++;
		en--;
	}
}

void rightrotate(int a[],int n,int k)
{
	int st,en;
	reverse(a,0,n-1);
	reverse(a,0,k-1);
	reverse(a,k,n-1);
	
}
void print_result(int a[],int n)
{
	cout<<"Resulted array=";
	for(int i=0;i<n;i++){
		
		cout<<a[i]<<" ";
		
	}
}
int main(){
	int n,k;
	cout<<"eneter the input size=";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter the K value to how many elements want to performe left rotate="<<endl;
	cin>>k;
	rightrotate(a,n,k);
	print_result(a,n);
	
	return 0;
	
}

