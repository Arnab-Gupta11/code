//      *
//     ***
//    *****
//   *******
//  *********


#include<stdio.h>
int main(){
  int n;
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
    int star=(i*2)-1;
    int space=n-i;
    int len=star+space;
    for(int j=0;j<len;j++){
      if(space>0){
        printf(" ");
        --space;
      }
      else if(star>0){
        printf("*");
        --star;
      }
    }
    printf("\n");
  }
  return 0;
}
