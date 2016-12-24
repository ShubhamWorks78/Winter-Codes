#include<iostream>
using namespace std;
int main(){
	int n,x;
	cin>>n>>x;
	int i,a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	int max = 0,less = 0,loc = 0,aft = 0;
	for(i=0;i<n;i++){
		if(a[i]<=x){
			loc += 1;
		}
		else{
			less += 1;
			if(less==2){
				break;
			}
		}
		
	}
	if(loc>max){
		max = loc;
	}
	cout<<max<<endl;
}
