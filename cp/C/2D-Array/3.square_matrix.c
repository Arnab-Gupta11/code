#include<stdio.h>
int main(){

  int row,col;
  scanf("%d %d",&row, &col);
  int matrix[row][col];
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      scanf("%d",&matrix[i][j]);
    }
  }
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      printf("%d ",matrix[i][j]);
    }
    printf("\n");
  }

  if(col==row){
    printf("This is a square matrix");
  }else{
    printf("This is not a square matrix");
  }

  return 0;
}


