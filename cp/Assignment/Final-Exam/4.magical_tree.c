#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // int topWidth = 2 * N + 9;
    // int startStars = 1;  
  int col=(2*5) + n; 
  int row=(col+1) / 2; 
  int star=1;
  int space=row-1;
  for(int i=1;i<=row;i++){
    for(int j=0;j<space;j++){
      printf(" ");
    }
    for(int j=1;j<=star;j++){
        printf("*");      
    }
    star+=2;
    space--;
    printf("\n");
  }

    for (int i = 0; i < 5; i++) {
        int stars = n;
        int spaces = 5;

        for (int j = 0; j < spaces; j++){
            printf(" ");
        } 
        for (int j = 0; j < stars; j++) {
          printf("*");
        }
        printf("\n");
    }

    return 0;
}
