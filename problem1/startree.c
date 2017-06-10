#include <stdio.h>

void printblank(int n) {
  for(int i=0; i<n; i++) {
    printf("_");
  }
}

void printstar(int n) {
  for(int i=0; i<n; i++) {
    printf("*");
  }
}

int main() {
  int rows, cols, stars, blanks;
  printf("Enter the number of rows:");
  scanf("%d", &rows);
  if(rows%2 == 0) cols = rows + 1;
  else cols = rows;
  
  for(int i=0; i<rows; i++) {
    stars = i+1;
    blanks = cols - stars;
    if(stars%2 != 0) {
      printblank(blanks/2);
      printstar(stars);
      printblank(blanks/2);
    }
    else {
      printblank(blanks/2);
      printstar(stars/2);
      printblank(1);
      printstar(stars/2);
      printblank(blanks/2);
    }
    printf("\n");
  }
  return 0;
}
