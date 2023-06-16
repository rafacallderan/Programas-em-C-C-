#include<stdio.h>
#include<string.h>
#include <locale.h>
#include <stdlib.h>
#define FUNC 3

typedef struct {
	char nome[30];
	int idade;
	int cod;
	float salario;
	
}Funcionario;

void dadosFunc(Funcionario *tmpFuncionario);
void imprimeDados(Funcionario tmpFuncionario, int i );



int main(){
	setlocale(LC_ALL, "Portuguese");
	
	Funcionario func[FUNC];
	int i;
	float total = 0;
    float media = 0;
	
	
	for(i=0; i<FUNC; i++){
		dadosFunc(&func[i]);
	}
	
	 for(i=0; i< FUNC; i++){
        total = total + func[i].salario;
 
    }
 
    media = total / 3;
	
	
	for(i=0; i< FUNC; i++){
		imprimeDados(func[i], i);
	}
	
	printf("\n\n");
	printf("A soma de todos os sal�rios �: %.2f\n", total);
    printf("A media de todos os sal�rios �: %.2f\n", media);
}

void dadosFunc(Funcionario *tmpFuncionario){
	printf("Digite o nome do funcionario: ");
	gets(tmpFuncionario->nome);
	printf("Digite a idade: ");
	scanf("%d", & tmpFuncionario->idade);
	fflush(stdin);
	printf("Digite o codigo: ");
	scanf("%d", & tmpFuncionario->cod);
	fflush(stdin);
	printf("Digite a o salario");
	scanf("%f", & tmpFuncionario->salario);
	fflush(stdin);
	
	system("cls");	
}


void imprimeDados(Funcionario tmpFuncionario, int i){
	printf("\n\n");
	printf("Dados do funcionario [%d] \n", i+1);
	printf("Nome: %s \n", tmpFuncionario.nome);
	printf("idade: %d \n", tmpFuncionario.idade);
	printf("codigo: %d \n", tmpFuncionario.cod);
	printf("salario: %.2f \n", tmpFuncionario.salario);
	
}
