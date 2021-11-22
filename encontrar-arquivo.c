#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *arq;
	char nome[9];

	printf("informe o nome do arquivo : ");
	fgets(nome, 9, stdin);

	arq = fopen(nome, "r");

	if(arq){
		printf("Arquivo encontrado\n");
	}else{
		printf("Arquivo nao encontrado\n");
	}


	return 0;
}
