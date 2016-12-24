#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	int i;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	int b[101];
	for(i=0;i<=100;i++){
		b[i] = 0;
	}
	int min = a[0],max=a[0];
	for(i=0;i<n;i++){
		if(a[i]>max){
			max = a[i];
		}
		if(a[i]<min){
			min = a[i];
		}
		b[a[i]]++;
	}
	for(i=min;i<=max;i++){
		if(b[i]!=1 || b[i]>1){
			break;
		}
	}
	if(i==max+1){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
}
