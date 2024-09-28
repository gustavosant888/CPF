#include <stdio.h>
#include "../lib/cliente.h"
#include "../lib/cliente_cad.h"

int main()

Cliente cliente;

cadastrar cliente(&cliente);

Gravar os dados no arquivo

FILE arquivo fopen("clientes.txt", "a");

If (arquivo THULL

printf("Erro ao abrir o arquivo.\n");

return 1;

1

fprintf (arquivo, ssd\n", cliente.none, cliente.cpf, cliente.email, cliente.Sdada); fclose(arquivo);

printf("Cliente cadastrado con sucesso!\n");

return 0;

}