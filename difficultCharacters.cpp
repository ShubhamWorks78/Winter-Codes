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
	int pivot = a[r];
	int j;
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
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char ch[1000000];
		cin>>ch;
		int a[26],b[26],i;
		for(i=0;i<26;i++){
			a[i] = 0;
			b[i] = 0;
		}
		for(i=0;ch[i]!='\0';i++){
			a[ch[i]-'a']++;
			b[ch[i]-'a']++;
		}
		int j;
		quickSort(a,0,25);
		for(i=0;i<26;i++){
			for(j=25;j>=0;j--){
				if(b[j]==a[i]){
					printf("%c ",j+'a');
					b[j] = -1;
					break;
				}	
			}
		}
		printf("\n");
	}
}
