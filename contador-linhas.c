#include <stdio.h>

int main(){
	FILE *arq;
	char nome[100], *resultado;
	int contador = 0;

	arq = fopen("arquivo.txt", "r");

	if(arq){
		while(!feof(arq)){ //feof - File End Of File
			resultado = fgets(nome, 100, arq);
			printf("Resultado: %d\n", resultado);
			if(resultado){
				contador++;
				printf("%s\n", nome);
			}
		}
	}else{
		printf("Não achei o arquivo");
	}
	fclose(arq);

	printf("total de linhas : %d\n", contador);
	return 0;
}
