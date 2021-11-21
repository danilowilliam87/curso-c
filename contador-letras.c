#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *arquivo;
	char c, iterator;
	int contador = 0;
	arquivo = fopen("vogais.txt", "r");

	if(arquivo){
		printf("informe a letra para pesquisar : ");
		scanf("%c", &c);
		//contar a quantidade de vezes que uma letra aparece
		while((iterator = getc(arquivo)) != EOF){
	           if(iterator == c){
	        	   contador++;
	           }
		}
	} else{
		//arquivo não localizado
		printf("arquivo nao localizado");
	}

	fclose(arquivo);
	printf("total de vezes que o caractere aparece : %d\n", contador);


	return 0;
}
