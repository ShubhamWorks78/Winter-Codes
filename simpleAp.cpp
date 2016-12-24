#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,su;
		int d=0,n;
		cin>>a>>b>>su;
		n = (2*su)/(a+b);
		if(n!=5){
			d = (b-a)/(n-5);	
		}
		int i,fir = a-2*d;
		cout<<n<<endl;
		for(i=0;i<n;i++){
			cout<<fir+i*d<<" ";
		}
		cout<<endl;
	}
}
