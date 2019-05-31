#include<stdio.h>
#define tam 5
int main(){
	int i;
	int vetA[tam];
	int vetB[tam]={9,8,7,6,5};
	
	for(i=0;i<tam;i++){
	
	 printf("Valor do vetor A: ");
	 scanf("%d",&vetA[i]);
    
	}
	for(i=4;i>=0;i--){
	
	 printf("Valor do valor de A: %d \n",vetA[i]);
}
    
    for(i=4;i>=0;i--){

	 printf("Valor do vetor B: %d \n",vetB[i]);
    }
return 0;
}
