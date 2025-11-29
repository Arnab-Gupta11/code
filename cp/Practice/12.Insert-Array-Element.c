#include<stdio.h>
int main()
{
	int n,pos,value;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	scanf("%d %d",&pos, &value);
	for(int i=n; i>=pos ;i--){
		arr[i]=arr[i-1];
	}
	arr[pos]=value;
	for(int i=0;i<n+1;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
