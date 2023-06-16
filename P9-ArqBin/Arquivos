#include <stdio.h>
#include <string.h>
 
typedef struct {
    long isbn;
    char titulo[50];
    char autor[50];
    int quantidade;
} Livro;
 
void obterDados(Livro *tmpLivro);
void imprimeDados(Livro tmpLivro);
 
int main() {
  Livro livroE, livroL;
  FILE *fp;
  fp = fopen("livros.bin", "wb");
 
  printf(" --- Digite os dados do livro ---\n");
 
  obterDados(&livroE); // 1o registro
  fwrite(&livroE, sizeof(Livro), 1, fp);
  fflush(fp);
 
  obterDados(&livroE); // 2o registro
  fwrite(&livroE, sizeof(Livro), 1, fp);
  fflush(fp);
 
  fclose(fp);
 
  fp = fopen("livros.bin", "rb");
 
  fread(&livroL, sizeof(Livro), 1, fp);
  printf(" --- Dados do livro obtido do arquivo ---\n");
  imprimeDados(livroL);
 
  fread(&livroL, sizeof(Livro), 1, fp);
  printf(" --- Dados do livro obtido do arquivo ---\n");
  imprimeDados(livroL);
   
  fclose(fp);
}
 
void obterDados(Livro *tmpLivro) {
    printf("Digite autor, titulo,");
    printf(" quantidade e ISBN ");
    printf("separados por ENTER\n");
    gets(tmpLivro->autor);
    gets(tmpLivro->titulo);
    scanf("%d", &tmpLivro->quantidade);
    fflush(stdin);
    scanf("%d", &tmpLivro->isbn);
    fflush(stdin);
}
 
void imprimeDados(Livro tmpL) {
    printf("Dados do livro \n");
    printf("Autor : %s\n", tmpL.autor);
    printf("Titulo: %s\n", tmpL.titulo);
    printf("Quantidade: %d\n", tmpL.quantidade);
    printf("ISBN: %d\n\n", tmpL.isbn);
}
