#include <stdio.h>
#include <stdlib.h>
 
 
typedef struct arvore {
    int info;
    struct arvore * prox;
} Arv;
 
 
 
void push(struct arvore ** aux, int newInfo){
	struct arvore * newArvore = (struct arvore*) malloc(sizeof(struct arvore));
	newArvore -> info = newInfo;
	newArvore -> prox = (*aux);
	(*aux) = newArvore;
}
 
 
 
int count(struct arvore * pesquisa, int verificar){
    struct arvore * atual = pesquisa;
    int count = 0;
    
	while (atual != NULL) {
        if (atual -> info == verificar)
            count++;
        atual = atual -> prox;
    }
    
	return count;
}
 
 
 
int main(){
    struct arvore * pesquisa = NULL;
    push(&pesquisa, 3);
    push(&pesquisa, 7);
    push(&pesquisa, 10);
    push(&pesquisa, 25);
    push(&pesquisa, 90);
    push(&pesquisa, 7);
    push(&pesquisa, 7);
    push(&pesquisa, 5);
    push(&pesquisa, 7);
    push(&pesquisa, 1);
    push(&pesquisa, 7);
 
    printf("Numero de Ocorrencias do Numero 7 = %d", count(pesquisa, 7));
    
	
	return 0;
}
