#include<stdio.h>
#define tam 5
int main(){
	int i,vetA[tam],vetB[tam],vetC[tam*2];
	printf("Digite os valores para os vetores A e B separados por espaco:\n");
	for(i=0;i<tam;i++){
		printf("i:%d ", i);
		scanf("%d %d",&vetA[i], &vetB[i]);
	}
	/*
	for(i=0;i<tam;i++){
		printf("Atribua valor para vetor B: ");
		 scanf("%d",&vetb[i]);
    }*/
    for(i=0;i<tam*2;i++){
		if (i < tam) {
			vetC[i] = vetA[i];
		} else {
			vetC[i] = vetB[i-tam];
		}
	}
	
	for (i=0; i < tam*2; i++)
		printf("%d ", vetC[i]);
	return 0;
}
