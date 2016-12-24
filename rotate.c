#include<stdio.h>
#include<conio.h>
void rightRotate(int a[],int n){
	int val = a[n-1];
	int i;
	for(i=n-1;i>0;i--){
		a[i] = a[i-1];
	}
	a[0] = val;
}
void leftRotate(int a[],int n){
	int val = a[0];
	int i;
	for(i=0;i<n-1;i++){
		a[i] = a[i+1];
	}
	a[n-1] = val;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,k;
		scanf("%d %d",&n,&k);
		int i,a[n];
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		k = k%n;
		if(k<(n-k)){
			for(i=0;i<k;i++){
				rightRotate(a,n);
			}
		}
		else{
			for(i=0;i<n-k;i++){
				leftRotate(a,n);
			}
		}
		for(i=0;i<n;i++){
			printf("%d ",a[i]);
		}
		printf("\n");
	}
}
