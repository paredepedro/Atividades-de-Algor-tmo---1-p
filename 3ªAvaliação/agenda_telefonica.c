#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct 
{
    char nome[250];
    int telefone;
    char email[250];
} Contato;

int main () {

    Contato lista_contatos[50];
    int contador = 0, c; //'contador' armazena a quantidade de registros cadastrados; e a variável 'c' é usada para o loop;
    int opcao; //'opcao' é a variável que será lida durante o menu;
    bool processo = true; //usada para verificar se o usuário deseja manter o programa processando;
    system("cls");

    while(processo){ //...Enquanto 'processo' for verdadeiro o programa continuará executando...
        printf("Digite a operação desejada:\n");
        printf("1. Cadastrar novo contato\n2. Listar contatos\n3. Encerrar processo\n"); //Adicionei uma terceira opção para encerrar o processo;
        printf("\nOpção: ");
        scanf("%d", &opcao);
        getc(stdin); //Essa linha é usada apenas para corrigir erro de leitura das próximas variáveis;
        system("cls");

        switch (opcao)
        {
            case 1:
                //Aqui há um 'if' para verificar se a lista já foi totalmente preenchida ou não;
                if(contador >= 50){
                    printf("\nTodos os 50 contatos foram preenchidos...\n");
                }else{
                    ///leitura de variáveis para registro de um contato;
                    printf("Digite o nome do novo contato: ");
                    fgets(lista_contatos[contador].nome, 250, stdin);
                    printf("Digite o telefone do novo contato: ");
                    scanf("%d", &lista_contatos[contador].telefone);
                    getc(stdin);
                    printf("Digite o email do novo contato: ");
                    fgets(lista_contatos[contador].email, 250, stdin);
                    system("cls");

                    contador++; //O contador é incrementado, significando que mais um contato foi registrado;
                    processo = true; //O processo continua rodando após o registro do contato, voltando para a tela de menu;
                }
                break;
            case 2:
                c = 0;
                if(contador == 0){
                    printf("A lista de contatos está vazia.\n\n");
                }else{
                    while(c < contador){
                        printf("Contato de número - '%d'\n", c);
                        printf("Nome: %s", lista_contatos[c].nome);
                        printf("Telefone: %d\n", lista_contatos[c].telefone);
                        printf("Email: %s", lista_contatos[c].email);
                        printf("--------------------------\n");
                        c++;
                    };
                }
                processo = true;
                break;
            case 3:
                processo = false; //caso o usuário digite 3, o programa será encerrado;
                break;
            default:
                printf("\nOpção inválida!!! - Por favor, insira uma opção válida.\n");
                processo = true; // caso o usuário digite qualquer outro valor, o programa continua rodando;
                break;
        }
    }
    return 0;
}