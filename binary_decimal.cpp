#include<bits/stdc++.h>
using namespace std;

int main(){
	int binary;
	cout<<"Enter the binary digit=";
	cin>>binary;
	int rem,p,i=0;
	int temp=binary,dec=0;
	while(temp>0)
	{
		rem=temp%10;
		p=pow(2,i);
		dec+=rem*p;
		temp=temp/10;
		i++;
	}
	cout<<"decimal number="<<dec;
	return 0;

}
