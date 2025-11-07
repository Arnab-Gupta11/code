#include<stdio.h>
int main(){
	int n,v;
	scanf("%d",&n);
	int pos=0;
	int neg=0;
	while(n--){
		scanf("%d",&v);
		if(v>0){
			pos+=v;
		}
		else{
			neg+=v;
		}
	}
	printf("%d %d",pos,neg);
	return 0;

}
