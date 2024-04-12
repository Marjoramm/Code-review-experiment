# include <stdio.h>
  int N;
  int Nsq;
  int i, j, k, m;
  int A[100];
  int B[100];
  int C[100];
  int main (){
    scanf("%d", &N);

Nsq=N*N;
printf("введите матрицу A\n");
for(i=0; i<Nsq; i++)
{scanf("%d", &A[i]);}
printf("введите матрицу B\n");
for(j=0; j<Nsq; j++)
{scanf("%d", &B[j]);}
    printf("hi\nN=%d\nNsq=%d\n", N, Nsq);
    printf("Mатрицa A\n");
for(i=0; i<Nsq; i++)
{printf("%d", A[i]);}
printf("\nMатрицa B\n");
for(j=0; j<Nsq; j++)
{printf("%d", B[j]);}     
    
printf("\nMатрицa C\n");
for(m=0; m<N; m++){
for(k=0; k<N; k++)
{C[k]=A[k]*B[k];
printf("%d ", C[k]);
}printf("\n");}
return 0;
  }