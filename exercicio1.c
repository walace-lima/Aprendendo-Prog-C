/*1. Fa�a um programa que leia 10 valores reais e os armazene em um vetor. Exibir o vetor com as
referidas posi��es de armazenamento de cada valor.*/
#include<stdio.h>
#define tam 10
int main (){
	int i,vet[tam],cont;

	for(i=0;i<tam;i++){

		printf("DIGITE UM NUMERO %d: ",i);
		scanf("%d",&vet[i]);
		
		cont ++;
	}
	printf("S�o %d vetores",cont);
	return 0;
}
