#include<iostream>
using namespace std;
int max(int a[],int n){
	int max = a[0],i;
	for(i=1;i<n;i++){
		if(a[i]>max){
			max = a[i];
		}
	}
	return max;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n],b[n],i;
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		for(i=0;i<n;i++){
			cin>>b[i];
		}
		int ali = max(b,n);
		int bi = max(a,n);
		if(ali>bi){
			cout<<"Alice"<<endl;
		}
		else if(bi>ali){
			cout<<"Bob"<<endl;
		}
		else if(ali==bi){
			cout<<"Tie"<<endl;
		}
	
	}
}
