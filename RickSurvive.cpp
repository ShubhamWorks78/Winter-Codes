#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b){
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
	swap(&a[r],&a[i+1]);
	return i+1;
}
void quickSort(int a[],int l,int r){
	if(l<r){
		int p = partition(a,l,r);
		quickSort(a,l,p-1);
		quickSort(a,p+1,r);
	}
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int a[n],i;
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		quickSort(a,0,n-1);
		int ans = 1;
		for(i=0;i<n;i++){
			if(a[i]>=(i+1+(i+1)/6)){
				continue;
			}
			else{
				ans = 0;
				break;
			}
		}
		if(ans==0){
			cout<<"Goodbye Rick\n"<<i<<endl;
		}
		else{
			cout<<"Rick now go and save Carl and Judas"<<endl;
		}
	}
}
