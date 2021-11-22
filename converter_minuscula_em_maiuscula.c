#include <stdio.h>
#include <stdlib.h>

int main() {
	char arquivo1[9];
	char arquivo2[9];
	char c, d, z;

	FILE *arq1;
	FILE *arq2;

	printf("informe o nome do arquivo 1");
	scanf("%s", arquivo1);


	printf("informe o nome do arquivo 2");
	scanf("%s", arquivo2);



	arq1 = fopen(arquivo1, "r");
	arq2 = fopen(arquivo2, "w");

	if(arq1 && arq2){
		//se encontrar o arquivo....
        while((c = getc(arq1)) != EOF){
             z = toupper(c);
        	if(c == z){
        		d = c;
        	}else{
        		d = toupper(c);
        	}

        	fputc(d, arq2);
        }
	}else{
		//se não encontrar o arquivo
		printf("impossivel abrir o arquivo");
	}

	fclose(arq1);
	fclose(arq2);

	return 0;
}
