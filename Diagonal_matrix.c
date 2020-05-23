
#include <stdio.h> 
#include <stdlib.h> 
  
#define M 4 
#define N 5 
    
void diagonalOrder(int P[][N]) 
{ 
	int k,i,j;
  for(k=0;k<=M-1;k++){
	  i=k;
	  j=0;
	  while(i>=0){
		  printf("%5d",P[i][j]);
		  i=i-1;
		  j=j+1;
	  }
	  printf("\n");
  }
  for(k=1;k<=N-1;k++){
	  i=M-1;
	  j=k;
	  while(j<=N-1){
		  printf("%5d",P[i][j]);
		  i=i-1;
		  j=j+1;
	  }
	  printf("\n");
  }
} 
  

void printMatrix(int matrix[M][N]) 
{ 
	int i,j;
    for ( i=0; i< M; i++) 
    { 
        for (j=0; j<N; j++) 
            printf("%5d ", matrix[i][j]); 
        printf("\n"); 
    } 
} 
  

int main() 
{ 
    int P[M][N] = {{1, 2, 3, 4,5}, 
                       { 6, 7, 8,9,10}, 
                       { 11, 12,13,14,15}, 
                       { 16,17,18,19,20}, 
                      }; 
    printf ("Given matrix is \n"); 
    printMatrix(P); 
  
    printf ("\nDiagonal printing of matrix is \n"); 
    diagonalOrder(P); 
    return 0; 
} 