#include<bits/stdc++.h>
using namespace std;

void duplicate_remov(int a[], int &n) {
    int i=0,j;
    for (j=1;j<n;j++) {
        if (a[i]!=a[j]) {
            i++;
            a[i]=a[j]; // Move the unique element to its correct position
        }
    }
    n=i+1;
}

int main() {
    int n;
    cout<<"enter the array size=";
    cin>>n;
    
    int a[n];
    cout<<"enter array elements" << endl;
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    
    duplicate_remov(a,n);
    
    cout<<"Unique elements:"<<endl;
    for(int i=0;i<n;i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}

