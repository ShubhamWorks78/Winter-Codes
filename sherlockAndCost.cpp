#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*void swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
int partition(int a[],int l,int r){
	int i = l-1;
	int j;
	int pivot = a[r];
	for(j=l;j<r;j++){
		if(a[j]<pivot){
			i++;
			swap(&a[i],&a[j]);
		}
	}
	swap(&a[i+1],&a[r]);
	return i+1;
}
void quickSort(int a[],int l,int r){
	if(l<r){
		int p = partition(a,l,r);
		quickSort(a,l,p-1);
		quickSort(a,p+1,r);
	}
}*/
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int ans = 0;
		int i,a[n];
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		//quickSort(a,0,n-1);
		int ans2 = 0,m;
		if(n%2==1){
			m = n;
		}
		else{
			m = n-1;
		}
		int b,c;
		for(i=1;i<m;i+=2){
			c = abs(a[i]-a[i-1])+abs(a[i+1]-a[i]);
			b = abs(1-a[i-1])+abs(a[i+1]-1);
			ans += max(b,c);
		}
		if(m%2==0){
			if(b>c){
				ans += abs(a[n-1]-1);
			}else{
				ans += abs(a[n-1]-a[n-2]);	
			}
		}
		cout<<ans<<endl;
	}
}
