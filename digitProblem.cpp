#include<iostream>
using namespace std;
int main(){
	int n;
	long long int x;
	cin>>x>>n;
	int a[19];
	int i = 0;
	while(x>0){
		int al = x%10;
		x /= 10;
		a[i] = al;
		i++;
	}
	int j,k=0;
	for(j=i-1,k=0;k<n;k++,j--){
		if(a[j]==9){
			k--;
		}
		else{
			a[j] = 9;
		}
	}
	for(j=i-1;j>=0;j--){
		cout<<a[j];
	}
}
