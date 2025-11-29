#include <stdio.h>
#include <stdbool.h>
int main() {
    int row, col;
    scanf("%d %d", &row, &col);

    int matrix[row][col];

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (row != col) {
        printf("NO\n");
        return 0;
    }

    bool isDiagonal = true;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (i == j || i + j == row - 1) {
                if (matrix[i][j] != 1) {
                    isDiagonal = false;
                    break;
                }
            } else {
                if (matrix[i][j] != 0) {
                    isDiagonal = false;
                    break;
                }
            }
        }
    }

    if(isDiagonal){
      printf("YES\n");
    }else{
      printf("NO\n");
    }

    return 0;
}
