#include<stdio.h>

int main(){
	float notas[10];
	int i = 0, maior, menor, qnt = 0;
	
	printf("Quantas notas quer informar?");
	scanf("%d", &qnt);
	
	for(i = 0;i < qnt; i++){
		printf("Informe sua nota(%d):", i+1);
		scanf("%f", &notas[i]);
		
		if(maior == 0){
			maior = notas[i];
		}else if(notas[i] > maior){
				maior = notas[i];
		}
		
		if(menor == 0){
			menor = notas[i];
		}else if(notas[i] < menor){
				menor = notas[i];
		}		
	}
	
	printf("Maior: %d\n", maior);
	printf("Menor: %d", menor);
}


