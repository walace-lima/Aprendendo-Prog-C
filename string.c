#include <stdio.h>
#include <string.h>

int main()
{
    //declare
    
 char minhaString[50];
 int tam,codigo,i;
 
 printf("Digite uma string:");
 gets(minhaString);
 
 tam=strlen(minhaString);
 printf("digite o codigo para criptografia");
  scanf("%d",&codigo);
 for(i=0;i<tam;i++){
 	if(minhaString[i]==''){
 		minhaString[]=minhaString[i];
 		else{
 			minhaString[i]=minhaString[i]+codigo
		 }
	 }
 }
 
printf("%s",minhaString);

return 0;
}

