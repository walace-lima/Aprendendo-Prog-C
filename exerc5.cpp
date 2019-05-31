#include<stdio.h>
#define tam 5
int main(){


int i, veta[tam],vetb[tam] ;

	for(i = 0 ;i < tam; i++){
		
  		printf("Atribua valor para vetor a: ");
  		
  			scanf("%d",&veta[i]);
				}
	for(i = 0;i < tam;i++){
		vetb[i]=veta[i]*veta[i];
		printf("Valor de vetb eh:%d\t",vetb[i]);
		
	}			

return 0;
}
