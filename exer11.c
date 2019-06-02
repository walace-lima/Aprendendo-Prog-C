#include<stdio.h>
#define tam 5
int main(){
	int vetor[tam]={2,4,5,7,8};
	int i,maior=0,menor=9999;
	
	for(i=0;i<tam;i++){	
		
    if(vetor[i]>maior){
    	maior=vetor[i];
		}
	}
	printf("O maior vetor eh: %d\t\n",maior);
						
    for(i=0;i<tam;i++){
       	
	 if(vetor[i]<menor){
		
	  menor=vetor[i];
}
}
    printf("O menor vetor eh:%d\t\n",menor);   
		return 0;
}         
