#include<stdio.h>
#include<string.h>
#include <locale.h>



typedef struct {
	char modelo[30];
	char placa[30];
	float valor;
	int ano;
	
}Veiculo;

void dadosVeic(Veiculo *tmpveic);
void imprimeDados(Veiculo tmpveic);



int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	Veiculo veic;

	
	dadosVeic( &veic);
	
  	imprimeDados(veic);
	
    
      
    
}


void dadosVeic(Veiculo *tmpVeiculo){
	printf("Digite o modelo do veiculo:  ");
	gets(tmpVeiculo->modelo);
	printf("Digite a placa do veiculo:  ");
	gets(tmpVeiculo->placa);
	printf("Digite o valor do veiculo:  ");
	scanf("%f", & tmpVeiculo->valor);
	printf("Digite o ano de fabricacao:  ");
	scanf("%d", &tmpVeiculo->ano);
	
}


void imprimeDados(Veiculo tmpVeiculo){
    printf("\n\n");
	printf("Dados do veiculo! \n");
	printf("modelo: %s \n", tmpVeiculo.modelo);
	printf("Placa: %s \n", tmpVeiculo.placa);
	printf("Valor: %.2f \n", tmpVeiculo.valor);
	printf("ANO de fabricacao: %d\n", tmpVeiculo.ano);
	
}
	
