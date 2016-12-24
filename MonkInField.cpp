#include<iostream>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int a[n][n],i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	int b[1000000];
	for(i=0;i<1000000;i++){
		b[i] = 0;
	}
	for(i=0;i<n;i++){
		int val = 0;
		for(j=0;j<n;j++){
			val += a[i][j];
		}
		b[val] += 1;
	}
	for(i=0;i<n;i++){
		int val = 0;
		for(j=0;j<n;j++){
			val += a[j][i];
		}
		b[val] += 1;
	}
	while(k--){
		
	}
}
