#include<stdio.h>
#define tam 5
int main(){
	int i;
	int somaP,somaI;
	int vetor[5]={2,7,8,48,7};
	
	for(i=0;i<tam;i++){
		
		if ((vetor[i] % 2)==0){
			
			somaP=vetor[i]+vetor[i];

		}
      	printf("A soma dos pares eh: %d\n",somaP);
}
	for(i=0;i<tam;i++){
		
		if ((vetor[i] % 2)==1){
			
			somaI=vetor[i]+vetor[i];
			
			printf("A soma dos impares eh: %d\t",somaI);

}
}
	return 0;
}
