/*3. Ler dois vetores A e B com 20 elementos reais. Construir um vetor RESP, onde cada elemento
é a subtração do elemento correspondente de A com B. Apresentar o vetor RESP.*/


#include<stdio.h>
#define tam 3
int main(){
	int veta[tam];
	int vetb[tam];
	int resp[tam];
	int i;
	int total;
	int sub;
	for(i=0;i<tam;i++){
		
		printf("Atribua um valor.Vetor a : ");
		
		scanf("%d",&veta[i]);
		
	
	}

	
	for(i=0;i<tam;i++){
		
		printf("Agora uma valor.Vetor b : ");
		
		scanf("%d",&vetb[i]);
		
	
		
	}
	
	for(i=0;i<tam;i++){
		
			resp[i] = veta[i]-vetb[i] ;
		
		printf("Subtracao de vetor A com B eh: ");
		
	     printf("%d\t",&resp[i]);
		
		
		
	}
	
	
		
	return 0;
}
