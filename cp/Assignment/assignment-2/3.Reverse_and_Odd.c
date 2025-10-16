#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	if(n<=0){
		return 0;
	}
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}

	for(int i=n-1; i>=0; i--){
	  if(i%2!=0){
	    printf("%d ",arr[i]);
	  }
	}
	return 0;

}
