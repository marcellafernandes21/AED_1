#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	char nome[30];
} String;

void ordenar(String *, unsigned short quantidade);

int main() 
{
	unsigned short i;
	unsigned short total, selecionado;

	scanf("%hu %hu", &total, &selecionado);
	String *lista = (String *)malloc(total * sizeof(String));

	if (lista == NULL) {
		printf("Erro na alocação de memória.\n");
		return 1;
	}

	for (i = 0; i < total; i++)
		scanf("%s", lista[i].nome);

	ordenar(lista, total);
	
	printf("%s\n", lista[selecionado - 1].nome);

	free(lista); 

	return 0;
}

void ordenar(String *lista, unsigned short quantidade)
{
	short i = 1, pos;
	String temp;

	while (i < quantidade)
	{
		pos = i - 1;
		temp = lista[i];

		while (pos >= 0 && strcmp(lista[pos].nome, temp.nome) > 0)
		{
			lista[pos + 1] = lista[pos];
			pos--;
		}

		lista[pos + 1] = temp;
		i++;
	}
}
