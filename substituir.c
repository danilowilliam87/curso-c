#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *arquivo1;
	FILE *arquivo2;
	char c,d;

	arquivo1 = fopen("vogais.txt", "r");
	arquivo2 = fopen("resultado.txt", "w");

	if(arquivo1 && arquivo2){
         while((c = getc(arquivo1)) != EOF){
        	 if((c == 65)||(c == 69)|| (c == 73)|| (c == 79)
			  || (c == 85)||(c == 97)||(c == 101)||(c == 105)
			   ||(c == 111)||(c == 118)){
                d = '*';
        	 }else{
        		 d = c;
        	 }
        	 fputc(d, arquivo2);
         }
	}else{
          printf("arquivo nao encontrado\n");
	}

	fclose(arquivo1);
	fclose(arquivo2);

	return 0;
}
