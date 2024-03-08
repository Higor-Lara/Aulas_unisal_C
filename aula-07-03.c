#include <stdio.h>

int main(void) {
	int vet[3];
	
	printf("Digite um numero: ");
	scanf("%d", &vet[0]);
	
	printf("Digite o segundo numero: ");
	scanf("%d", &vet[1]);
	
	printf("Digite o terceiro numero: ");
	scanf("%d", &vet[2]);
	
	if(vet[0] > vet[1]) {
		if(vet[0] > vet[2]) {
			printf("O %d e maio do que o %d e o %d", vet[0], vet[1], vet[2]);
		}else {
			printf("O %d e maio do que o %d e o %d", vet[2], vet[0], vet[1]);
		}
	} else {
		if(vet[1] > vet[2]) {
			printf("O %d e maio do que o %d e o %d", vet[1], vet[0], vet[2]);
		}else {
			printf("O %d e maio do que o %d e o %d", vet[2], vet[0], vet[1]);
		}
	}
	return 0;
}