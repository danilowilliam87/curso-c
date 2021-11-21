#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *arquivo;
	char c;
	int contador = 0;
	int contVogais = 0, contConsoantes = 0;



	arquivo = fopen("vogais.txt", "r");

	if(arquivo){
		while((c = getc(arquivo))!= EOF){
           //usar tabela ascii para saber qual caractere
			if(c == 65 || c == 69 || c == 73 || c == 79 || c == 85
			   || c == 97 || c == 101 ||c == 105 ||c == 111 || c == 117){
				contador++;

			}
			if((c > 65 && c<=68) || (c >= 70 && c < 73)
					|| (c > 73 && c < 78) || (c > 79 && c <= 84)
					|| (c > 85 && c < 91)){
				contConsoantes++;
			}
			if((c > 97 && c < 101) || (c > 101 && c < 105)
					|| (c > 105 && c < 111) || (c > 111 && c < 123)){
                contConsoantes++;
			}
		}
	}else{
		printf("arquivo nao encontrado");
	}

	printf("total de vogais no arquivo = %d\n", contador);
	printf("total de consoantes no arquivo = %d\n", contConsoantes);
	return 0;
}
