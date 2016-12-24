#include<stdio.h> 
int main(){
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		signed int a,b,c,d;
		scanf("%d %d %d %d",&a,&b,&c,&d);
		int ans = 0;
		if(a==0 || b==0 || c==0 || d==0 || (a+b)==0 || (a+c)==0 || (a+d)==0 || (b+c)==0 || (c+d)==0 || (b+d)==0 || (a+b+c)==0 || (a+c+d)==0 || (b+c+d)==0 || (a+b+d)==0 || (a+b+c+d)==0){
			ans = 1;
		}
		if(ans==0){
			printf("No\n");
		}
		else{
			printf("Yes\n");
		}
	}
	return 0;
}
