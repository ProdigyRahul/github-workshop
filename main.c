#include<stdio.h>

int main() {
  printf("Hello, World!\n");

  // print the number from 1 to 10
  int n = 10;
  for(int i = 1; i <= n; i++) {
    printf("%d\n", i);
  }
  int k = 100;
  while(k>=0) {
    printf("%d\n", k);
    k -= 10;
  }
}
