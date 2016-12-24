#include<iostream>
using namespace std;
int swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
void chnge(int a[],int l,int r,int c){
	int i;
	for(i=l;i<=r;i++){
		a[i] += c;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int i,n,m;
		cin>>n>>m;
		int l[m],r[m],c[m],p,q,s;
		cin>>l[0]>>r[0]>>c[0]>>p>>q>>s;
		int a[n+1];
		for(i=0;i<=n;i++){
			a[i] = 0;
		}
		chnge(a,l[0],r[0],c[0]);
		for(i=1;i<m;i++){
			l[i] = (l[i-1]*p+r[i-1])%n+1;
			r[i] = (r[i-1]*q+l[i-1])%n+1;
			if(l[i]>r[i]){
				swap(&l[i],&r[i]);
			}
			c[i] = (c[i-1]*s)%1000000+1;
			chnge(a,l[i],r[i],c[i]);
		}
		int max = c[0];
		for(i=1;i<m;i++){
			if(max<c[i]){
				max = c[i];
			}
		}
		int ma = a[0],pos = 0;
		for(i=0;i<=n;i++){
			if(a[i]>ma){
				ma = a[i];
				pos = i;
			}
		}
		cout<<pos<<" "<<max<<endl;
	}
}
