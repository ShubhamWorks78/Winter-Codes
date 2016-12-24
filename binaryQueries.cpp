#include<iostream>
using namespace std;
int main(){
	int i,n,q;
	cin>>n>>q;
	int vl;
	bool arr[n];
	for(i=0;i<n;i++){
		cin>>vl;
		if(vl==0){
			arr[i] = false;
		}
		else{
			arr[i] = true;
		}
	}
	while(q--){
		int ch;
		cin>>ch;
		if(ch==1){
			int p;
			cin>>p;
			if(arr[p-1]==true){
				arr[p-1] = false;
			}
			else{
				arr[p-1] = true;
			}
		}
		else{
			int l,r;
			cin>>l>>r;
			if(arr[r-1]==true){
				cout<<"ODD"<<endl;
			}
			else{
				cout<<"EVEN"<<endl;
			}
		}
	}
}
