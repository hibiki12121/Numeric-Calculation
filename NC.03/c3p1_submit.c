#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define N 3
#define c 2

double A[N][N]={{1,2,3},{4,5,6},{7,8,9}};
double C[N][N]={{c,0,0},{0,1,0},{0,0,1}};
double X[N][N];

int main(){
  int i,j,k;
  
  for(i=0;i<N;++i){
    for(j=0;j<N;++j){
      X[i][j]=0;    //Xを初期化
    }
  }

  for(i=0;i<N;++i){
    for(j=0;j<N;++j){
      for(k=0;k<N;++k){
        X[i][j] = X[i][j] + (C[i][k] * A[k][j]); //C, Aの積をXに格納
      }
    }  
  }

  printf("A=\n");   
  for(i=0;i<N;++i){
    for(j=0;j<N;++j){
      printf("%f ", X[i][j]); //Aのi行の各成分を出力
    }
    printf("\n");
  }

  printf("C=\n");   
  for(i=0;i<N;++i){
    for(j=0;j<N;++j){
      printf("%f ", C[i][j]);  //Cのi行の各成分を出力
    }
    printf("\n");
  }
  
  printf("C*A=\n");   
  for(i=0;i<N;++i){
    for(j=0;j<N;++j){
      printf("%f ", X[i][j]); //Xのi行の各成分を出力
    }
    printf("\n");
  }
 
}
