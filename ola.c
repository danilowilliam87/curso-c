#include <stdio.h>

int main(){
	FILE *arquivo;
	char entrada[100];

	arquivo = fopen("arquivo.txt", "w");

	if(arquivo){
		//se o arquivo foi criado
		printf("digite o texto desejado. para encerrar o programa digite 0(zero) em una nova linha");
		fgets(entrada, 100, stdin); //recebe os dados do teclado limitado a 100 caracteres e armazena no vetor entrada
		while(entrada[0] != '0'){
			fputs(entrada, arquivo); //pega os dados que estão armazenados na entrada e salva no arquivo
			fgets(entrada, 100, stdin);
		}
	}else{
	    //se houver erro...
		printf("file not created");
	}

	fclose(arquivo);


	return 0;
}
