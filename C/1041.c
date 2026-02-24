#include <stdio.h>

int main(){

  float X, Y;

  scanf("%f", &X);
  scanf("%f", &Y);

  if(X > 0 && Y > 0){
    printf("Q1");
  }else if(X < 0 && Y > 0){
    printf("Q2");
  }else if(X < 0 && Y < 0){
    printf("Q3");
  }else if(X > 0 && Y < 0){
    printf("Q4");
  }else if(X == 0 && Y == 0){
    printf("Origem");
  }else if(X == 0 && Y != 0){
    printf("Eixo Y");
  }else if(X != 0 && Y == 0){
    printf("Eixo X");
  }

  printf("\n");

return 0;
}
