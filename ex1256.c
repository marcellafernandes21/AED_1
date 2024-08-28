#include <stdio.h>
#include <stdlib.h>

typedef struct no_lista{

	int valor;
	struct no_lista *proximo;

} NoLista;

typedef struct lista_encadeada{

	NoLista *primeiro;
	NoLista *ultimo;

} ListaEncadeada;

void inserir_na_tabela(ListaEncadeada *, const int);
int tamanhoTabela;

int main()
{
	unsigned testes;
	NoLista *noAtual;
	int quantidadeElementos, i, elementoTemp;

	scanf("%u", &testes);

	while (testes--)
	{
		scanf("%u %d", &tamanhoTabela, &quantidadeElementos);

		ListaEncadeada tabela[tamanhoTabela];
		for (i = 0; i < tamanhoTabela; ++i)
		{
			tabela[i].primeiro = NULL;
			tabela[i].ultimo = NULL;
		}

		for (i = 0; i < quantidadeElementos; ++i)
		{
			scanf("%d", &elementoTemp);
			inserir_na_tabela(tabela, elementoTemp);
		}

		for (i = 0; i < tamanhoTabela; ++i)
		{	
			printf("%d -> ", i);
			for (noAtual = tabela[i].primeiro; noAtual; noAtual = noAtual->proximo)
				printf("%d -> ", noAtual->valor);

			printf("\\");
			printf("\n");
		}

		if (testes)
			printf("\n");
	}

	return 0; 
}

void inserir_na_tabela(ListaEncadeada *tabela, const int chave)
{
	NoLista *novoNo;
	novoNo = (NoLista *) malloc(sizeof(NoLista));

	if(!novoNo)
		exit(1);

	int indice = chave % tamanhoTabela;
	if (tabela[indice].primeiro)
		tabela[indice].ultimo->proximo = novoNo;
	else
		tabela[indice].primeiro = novoNo;

	tabela[indice].ultimo = novoNo;
	novoNo->proximo = NULL;
	novoNo->valor = chave;
}
