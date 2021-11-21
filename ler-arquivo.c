#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *arquivo;
	char c;

	arquivo = fopen("arquivo.txt", "r");

	if(arquivo){
		//arquivo encontrado
		while(!feof(arquivo)){
			c = getc(arquivo);
			printf("%c", c);
		}
	}else{
	    //arquivo nã existe
		printf("arquivo não existe");
	}

	fclose(arquivo);


	return 0;
}
