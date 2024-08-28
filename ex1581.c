#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() 
{
	unsigned short quantidadeCasos, quantidadePessoas;
	char palavraAtual[21], palavraAnterior[21];
	bool idiomaDiferente;

	scanf("%hu", &quantidadeCasos);

	while (quantidadeCasos--)
	{
		scanf("%hu", &quantidadePessoas);

		scanf(" %s", palavraAtual);

		quantidadePessoas--;
		idiomaDiferente = false;
		strcpy(palavraAnterior, palavraAtual);

		while (quantidadePessoas--)
		{
			if (strcmp(palavraAtual, palavraAnterior) != 0 && idiomaDiferente == false)
				idiomaDiferente = true;
			else
				strcpy(palavraAnterior, palavraAtual);

			scanf(" %s", palavraAtual);
		}

		if (idiomaDiferente)
			printf("ingles\n");
		else
			printf("%s\n", palavraAtual);

		idiomaDiferente = false;
	}

	return 0; 
}
