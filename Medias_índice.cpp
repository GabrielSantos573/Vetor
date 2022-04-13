#include<stdio.h>

int main(){
	int notas[5];
	float media;
	
	printf("Informe a nota1: ");
	scanf("%d", &notas[1]);
	
	printf("Informe a nota2: ");
	scanf("%d", &notas[2]);
	
	printf("Informe a nota3: ");
	scanf("%d", &notas[3]);
	
	printf("Informe a nota4: ");
	scanf("%d", &notas[4]);
	
	printf("Informe a nota5: ");
	scanf("%d", &notas[5]);
	
	media = (notas[1] + notas[2] + notas[3] + notas[4] + notas[5])/5;
	
	printf("Media: %.2f", media);
	
return 0;
}
