#include <stdio.h>
#include <stdlib.h>

int main(){

	int tabelaAscii[50];
	int qtdOcorrencias[50];

	FILE *arquivo;
	char c;

	//alimentar vetor com o alfabeto de acordo com a tabela ascii
	for(int i = 0; i < 50; i++){
		qtdOcorrencias[i] = 0;
		if(i < 26){
			tabelaAscii[i] = (65 + i);
		}else{
			tabelaAscii[i] = (71 + i);
		}
	}

	arquivo = fopen("vogais.txt", "r");

	if(arquivo){
		while((c = getc(arquivo)) != EOF){
			for(int k = 0; k < 50; k++){
				if(c == tabelaAscii[k]){
					qtdOcorrencias[k] +=1;
				}
			}
		}
	}else{
       printf("arquivo nao encontrado");
	}

	fclose(arquivo);

	for(int j = 0; j < 50; j++){
		printf("caractere : %c -> total de ocorrencias : %d\n", tabelaAscii[j], qtdOcorrencias[j]);
	}
	return 0;
}
