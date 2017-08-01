#include <stdio.h>
#include <stdlib.h>
#define DIM 10

int main()
{
  int *Termos = (int *) malloc(DIM * sizeof(int));
  int *Org = (int *) malloc(DIM * sizeof(int));
  int teste,continuar=0,Distintos=0;

  for(int count=0;count<DIM;count++){
      Org[count]=0;
  }


  for(int count=0;count<DIM;count++){
    scanf("%d",&Termos[count]);
    if(count!=0){
      if(Termos[count-1]!=Termos[count]){
          Distintos++;
      }
    }
  }


  for(int count=0;count<DIM;count++){
      Termos[count];//PAREI AQUIIIIII
  }

    for(int count = 0;count<v1;count++){
      Vet[count]=1;
    }
    for(int count = v1;count<v2+v1;count++){
      Vet[count]=2;
    }
    for(int count = v1+v2;count<v2+v1+v3;count++){
      Vet[count]=3;
    }

    for(int count=0;count<sizeof(Vet)/sizeof(int);count++){
      printf("%3d",Vet[count]);
    }
  return 0;
}
