/*2. Ler 80 elementos inteiros em um vetor A. Construir um vetor B de mesmo tamanho com os
elementos de A multiplicados por 3. Exibir B.*/


#include<stdio.h>
#define tam 5
int main (){
  int i;
  int veta[tam];
  int vetb[tam];
  int mult;
  
  for(i=0;i<tam;i++){ 
  
    printf("Atribua valor para a:\n");
    
    scanf("%d",&veta[i]);
    
    mult=veta[i]*3;
    
    printf("%d\n",mult);
  }
  
  
  for(i=0;i<tam;i++){
  	
    printf("valor de b: %d",vetb[i]);
  }
  
  return 0;

}
