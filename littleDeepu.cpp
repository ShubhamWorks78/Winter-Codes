#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n],i;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	int q;
	cin>>q;
	while(q--){
		int k;
		cin>>k;
		for(i=0;i<n;i++){
			if(a[i]>k){
				a[i] -= 1;
			}
		}
	}
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
