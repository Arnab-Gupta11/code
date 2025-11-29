#include<stdio.h>
int main(){
  int n;
  scanf("%d",&n);
  int num=1;
  int space=n-1;
  int rev_num=((n-1)*2)-1;
  int rev_space=1;

  for(int i=1;i<=n;i++){
    for(int j=0;j<space;j++){
      printf(" ");
    }
    for(int j=1;j<=num;j++){
      if(i%2==0){
        printf("-");
      }else{
        printf("#");      
      }
    }
    num+=2;
    space--;
    printf("\n");
  }
  for(int i=n-1;i>=1;i--){
    for(int j=0;j<rev_space;j++){
      printf(" ");
    }
    for(int j=1;j<=rev_num;j++){
      if(i%2==0){
        printf("-");
      }else{
        printf("#");      
      }
    }
    rev_num-=2;
    rev_space++;
    printf("\n");
  }
  
  return 0;
}

