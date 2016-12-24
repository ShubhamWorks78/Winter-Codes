#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,h;
		cin>>n>>h;
		int i,a[n];
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		int b[n],j;
		int ans = 0;
		for(j=0;j<h;j++){
			for(i=0;i<n;i++){
				if(a[i]==0){
					ans = 1;
				}
				b[i] = a[i];
			}
			if(ans==0){
				break;
			}
			for(i=0;i<n;i++){
				if(a[i]==1){
					if(i==0){
						if(b[i+1]==0){
							a[i] = 0;
						}
					}
					else if(i==n-1){
						if(b[i-1]==0){
							a[i] = 0;
						}
					}
					else{
						if(b[i+1]==0 || b[i-1]==0){
							a[i] = 0;
						}
					}
				}
				else{
					if(i==0){
						if(b[i+1]==1){
							a[i] = 1;
						}
					}
					else if(i==n-1){
						if(b[i-1]==1){
							a[i] = 1;
						}
					}
					else{
						if(b[i-1]==1 && b[i+1]==1){
							a[i] = 1;
						}
					}
				}
			}
		}
		for(i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}
