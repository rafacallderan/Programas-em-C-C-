#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>


typedef int telemento;


typedef struct no{
        int dado;
        struct no * prox;        
}tno;


typedef struct fila{
        tno * comeco;
        tno * fim;        
}tfila;
    
void criar(tfila * ppf){
     ppf->comeco = ppf->fim = NULL;
}


bool enfileirar(tfila * ppf, int valor){
     tno * novo = (tno*) malloc(sizeof(tno));
     if(novo == NULL)
             return false;
     else if(ppf->comeco == NULL){
             novo->dado = valor;
             novo->prox = NULL;
             ppf->comeco = novo;
             ppf->fim = novo;
             printf("Fila[%d] \n", novo->dado);
             return true;          
          }
          else 
               if(ppf->comeco != NULL){
               novo->dado = valor;
               novo->prox = NULL;
               (ppf->fim)->prox = novo;
               ppf->fim = novo;
               printf("Fila[%d] \n", novo->dado);
               return true;                            
              }    
}


bool desinfileirar(tfila * ppf, int * valor){
     tno * aux;
     if(ppf->comeco == NULL)
                    return false;
     else{
          aux = ppf->comeco;
          *valor = (ppf->comeco)->dado;      //*valor = aux->dado;
          ppf->comeco = (ppf->comeco)->prox; //ppf->comeco = aux->prox;
          free(aux);
          return true;         
     }
}


void imprimir(tfila *ppf){
     tno * aux;
     aux = ppf->comeco;
     while(aux != NULL){
           printf("Fila[%d] \n", aux->dado);    
           aux = aux->prox;               
     }
}




bool dividirFila(tfila * ppf, tfila * ppp, tfila * ppi){
     tno * aux;
     int i = 0, j = 0, valor = 0;
     if(ppf->comeco == NULL)
        return false;
     else{
          while(desinfileirar(ppf, &valor)){
                if(valor % 2 == 0){
                   if(enfileirar(ppp, valor))
                       printf("FilaPar[%d] = %d \n", i, valor);
                   i++;             
                }      
                else{
                     if(enfileirar(ppi, valor))
                       printf("FilaImpar[%d] = %d \n", j, valor);
                     j++;     
                }         
          }     
     }
}


int pegaTamanho(tfila *ppf){
    tno * aux;
    int tam = 0;
    aux = ppf->comeco;
    if(aux == NULL)
       return 0;
    else{
         while(aux != NULL){
               tam++;
               aux = aux->prox;          
         }     
         return tam;
    }
}


int main(){
     
     tfila* pf, pp, pi;
     int valor = 0, op = 0, pegaValor = 0, result = 0;      
                
     criar(&pf);     
     criar(&pp);     
     criar(&pi);                  
     
     do{
        system("CLS");
        system("PAUSE");
        printf("\n\t Entre com a opcao: ");
        printf("\n\t 1: Enfileirar. ");
        printf("\n\t 2: Desinfileirar. ");
        printf("\n\t 3: Dividir. ");
        printf("\n\t 4: Tamanho. ");
        printf("\n\t-1: Sair. ");
        scanf("%d", &op);
        switch(op){
                   case 1: do{
                              printf("Entre com o valor ou (-1 para sair): ");
                              scanf("%d", &valor);
                              if(valor == -1)
                                       printf("Saindo...\n");
                              else{
                                   if(!enfileirar(&pf, valor)){
                                      printf("Nao foi possivel enfileirar! \n");                    
                                   }     
                              }                                                         
                           }while(valor != -1);           
                           break;
                   case 2: do{
                              printf("Entre com o valor ou (-1 para sair): ");
                              scanf("%d", &valor);
                              if(valor == -1)
                                       printf("Saindo...\n");
                              else{
                                   if(desinfileirar(&pf, &pegaValor)){
                                      printf("Removido %d elemento! \n", pegaValor);   
                                   }  
                                   else{
                                       printf("Nao foi possivel enfileirar! \n");                            
                                   }
                              }
                           }while(valor != -1);
                           break;
                   case 3: if(dividirFila(&pf, &pp, &pi)){
                            printf("Fila Par! \n");                               
                            imprimir(&pp);
                            printf("Fila Impar! \n");
                            imprimir(&pi);    
                           }
                           system("PAUSE");                                                
                           break;
                   case 4: result = pegaTamanho(&pf);
                           if(result == 0)
                              printf("Fila Vazia! \n");
                           else
                               printf("\nO tamanho da Fila eh: %d \n", result);
                           system("PAUSE");
                           break;
        }                        
     }while(op != -1);


  return 0;     
}
