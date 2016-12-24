#include<iostream>
using namespace std;
int binary(int a[],int l,int r,int key){
	while(l<=r){
		int m = l+(r-l)/2;
		if(a[m]==key){
			return m;
		}
		else if(a[m]>key){
			l = m+1;
		}
		else{
			r = m-1;
		}
	}
	return -1;
}
int ceilIndex(int a[],int l,int r,int key){
	while(r-l>1){
		int m = l+(r-l)/2;
		if(a[m]<=key){
			r = m;
		}
		else{
			l = m;
		}
	}
	return r;
}
int find(int a[],int n,int key){
	int i;
	for(i=n-1;i>=0;i--){
		if(key<=a[i]){
			return i+1;
		}
	}
	return 1;
}
int main(){
	int n,i;
	cin>>n;
	int val,a[n],j = 0;
	for(i=0;i<n;i++){
		cin>>val;
		if(i==0){
			a[j++] = val;
		}
		else if(binary(a,0,j,val)==-1){
			a[j++] = val;
		}
	}
	int k;
	n = j;
	cin>>k;
	while(k--){
		int m;
		cin>>m;
		int pos;
		pos = ceilIndex(a,-1,j,m);
		if(m<a[pos-1]){
			pos += 1;
		}
		if(pos==0){
			pos = 1;
		}
		cout<<pos<<endl;
	}
}
