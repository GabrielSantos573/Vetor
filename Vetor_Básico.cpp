#include<stdio.h>

int main(){
	float notas[5], media, soma=0;
	int i;
	
	for(i=0; i<5; i++){
		printf("Informe a nota%d: ",i+1);
		scanf("%f", &notas[i]);
		soma = soma + notas[i];
	}
	
	media = soma/5;
	printf("Media: %.2f", media);
	
return 0;
}
