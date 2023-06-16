#include<stdio.h>
#include <string.h>

void temEmail(char email[],char string[]){
	
	int i = 0;
	int j = 0;
	int estado;
	
	while(string[i] != '\0'){
		if (string[i] == ' '){
			estado = 0;
		} else if (estado == 0 && string[i] != ' '){
			estado = 1;
		} else if (estado == 1 && string[i] =='@'){
			estado = 2;
		} else if (estado == 2 && string[i] == '.'){
			estado = 3;
		} else if (estado == 3 && string[i]!= ' ' && string[i]!= '.'){
			j++;
			email[i] = j;
			
		}
		i++;
	}
		printf("e-mails encontrados:  %d", email);
}
	


int main(){
	char frase[150];
	char encontrar[20];
	printf("----Verificador de email----");
	printf("\n\n");
	printf("Digite email: ");
	gets(frase);
	
	temEmail(encontrar, frase);
	
	//codigo nao finalizado! 
}
