/*12. Carregue um vetor de 50 elementos inteiros. Leia um determinado n�mero e pesquise se o
mesmo existe no VETOR. Caso exista, imprimir em que posi��o ele est�, caso contr�rio, exiba
uma mensagem.*/

#include<stdio.h>
#define tam 5

int main(){
	
	int i, n;
	int vet[tam]={1,2,3,4,5};
	
	printf("Digite um numero:");
	scanf("%d",&n);
	for(i=0;i<5;i++){
		if(vet[i]==n){
			printf("vetor posicao %d \n",i);
			
		}
	}
	
 return 0;	
	
 }
