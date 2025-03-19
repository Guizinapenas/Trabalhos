#include <stdio.h>

struct Livros {
    char titulo[50];
    char autor[50];
    char assunto[100];
    int id_livro;
};

int main() {
    struct Livros Livro[3];
    int i;

    for(i = 0; i < 3; i++) {
        printf("\nDigite os dados do Livro %d:\n", i + 1);
        
        printf("Titulo: ");
        gets(Livro[i].titulo);
        
        printf("Autor: ");
        gets(Livro[i].autor);
        
        printf("Assunto: ");
        gets(Livro[i].assunto);
        
        printf("ID: ");
        scanf("%d", &Livro[i].id_livro);
        getchar(); 
    }

    printf("\nLivros Cadastrados:\n");
    for(i = 0; i < 3; i++) {
        printf("\nLivro %d:\n", i + 1);
        printf("Titulo: %s\n", Livro[i].titulo);
        printf("Autor: %s\n", Livro[i].autor);
        printf("Assunto: %s\n", Livro[i].assunto);
        printf("ID: %d\n", Livro[i].id_livro);
    }

    return 0;
}
