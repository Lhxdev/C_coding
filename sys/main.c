#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define n 3

struct Poltronas{
    int ocupado;
    char nome[50];
};
void menu();
void iniciarSessao();
void exibirPoltronas();
void reservar();
void comprar();
void cancelar();
void sair();

int main()
{
    struct Poltronas dados[n][n];

    printf("Bem vindo ao sistema de reserva de poltronas do cinema X!\nCarregando menu...\n");
    iniciarSessao(dados[n][n]);
    menu(dados[n][n]);
    exibirPoltronas(dados[n][n]);


    return 0;
}
void menu(struct Poltronas dados[n][n]){
    int opcao;
printf("--------------------------------------\n");
printf("Menu de opcoes:\n1- Reservar\n2- Comprar\n3- Cancelar\n4- Sair\n");
printf("--------------------------------------\n");
printf("Insira uma opcao: ");
scanf("%d", &opcao);
switch (opcao){
case 1:
    reservar(dados[n][n]);
case 2:
    //comprar();
case 3:
    //cancelar();
case 4:
    //sair();
    }
}
void iniciarSessao(struct Poltronas dados[n][n]){
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            dados[i][j].ocupado=0;
            dados[0][0].ocupado=1; // 0 0 nao recebe 1;
        }
    }
}
void exibirPoltronas(struct Poltronas dados[n][n]){
    int cont=1; // nao aparece uma parte da matriz;
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (dados[i][j].ocupado == 1){
            printf("Poltrona %d = X ",cont);
            cont++;
            }
            if (dados[i][j].ocupado==0){
            printf("Poltrona %d = O ",cont);
            cont++;
            }

        }
            printf("\n");
        }
        }
void reservar(struct Poltronas dados[n][n]){
    int poltrona;
    printf("\nInsira a poltrona desejada: ");
    scanf("%d", &poltrona);
    if(dados);
}

