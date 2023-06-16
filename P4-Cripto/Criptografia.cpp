#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 100


int main(){
    setlocale(LC_ALL, "Portuguese");
    char palavra[MAX];
    int i = 0;
    char letra;
    
    printf("Digite uma Palavra: ");
    gets(palavra);
    
    printf("Digite a letra que deseja criptografar: ");
    scanf("%c", &letra);
    
    
	for (i=0; palavra[i] != '0'; i++) {
        if(palavra[i] == letra){
          palavra[i] = '*';
		}   
}    
   
    printf("\n Palavra criptografada: %s", palavra);
    
	return 0;    
}
