#include <stdio.h>
#include <stdlib.h>

int main(){
    char arquivo1[9];
    char arquivo2[9];
    char params[50];
    //char c;

    FILE *arq1;
    FILE *arq2;
    FILE *arq3;

    printf("informe o nome do primeiro arquivo : ");
    scanf("%s", arquivo1);

    printf("informe o nome do segundo arquivo :");
    scanf("%s", arquivo2);

    arq1 = fopen(arquivo1, "r");
    arq2 = fopen(arquivo2, "r");
    arq3 = fopen("doc4.txt","w");

    if(arq1 && arq2 && arq3){
        while(!feof(arq1)){
        	fgets(params, 50, arq1);
        	fputs(params, arq3);
        	if(feof(arq1)){
        		fputc("\n", arq1);
        	}
        }
        while(!feof(arq2)){
        	fgets(params, 50, arq2);
        	fputs(params, arq3);
        	if(feof(arq2)){
        	    fputc("\n", arq2);
        	        	}
        }

    }else{
    	//se não encontrar...
    	printf("algum arquivo nao foi encontrado\n");
    }

	return 0;
}
