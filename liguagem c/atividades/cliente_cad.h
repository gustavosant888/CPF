#include <stdio.h>

#include <string.h>

#include "cliente.h"

#include "validacao.h"

// Função para cadastrar un cliente

void cadastrar_cliente (Cliente *cliente)

{

printf("Digite o nome do cliente: ");

fgets(cliente->nome, sizeof(cliente->nome), stdin);

cliente->now[strcspn(cliente->nome, "\n")] 0; // Remove a nova 1

do
{
printf("Digite e CPF do cliente: "); fgets(cliente->cpf, sizeof(cliente->cpf), stdin); cliente->cpf[strcspm(cliente->cpf, "\n")] = 0;
} while (!validar_cpf(cliente->cpf));

do
{
printf("Digite o e-mail do cliente: "); fgets(cliente->email, sizeof(cliente->email), stdin); cliente->email[strcspn(cliente->email, "\n")] = 0;
} while (!validar_email(cliente->email));

printf("Digite a idade do cliente: ");

scanf("%d", &cliente->idade);

getchar(); // Limpa o buffer do teclado
}