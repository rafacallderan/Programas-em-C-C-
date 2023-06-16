#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    char frase[101];
    char fraseC[101];
    int i = 0, j = 0;
    
   
    printf("Fala do cebolinha \n");
	printf("\n Digite a frase correta: ");
    gets(frase);
     
    
	while(frase[i] != '\0') {
    
		if(frase[i] == 'r' && frase[i+1] == '\0' ){
    		frase[i] = 'r';
		
		} else
		 
		if(frase[i] == 'r' && frase[i+1] != ' ' ) {
    		frase[i] = 'l';
    		
		} else 
	
		if(frase[i] == 'r' && frase[i+1] == ' ' ) {
    		frase[i] = 'r';
    		
		} else
		
		if(frase[i] == 'r' && frase[i+1] == 'r'){
			frase[i] = 'l';
		}
		
		i++;
	}
     
	printf("\n");  
	printf(" Frase do Cebolinha %s \n", frase);
        
}
