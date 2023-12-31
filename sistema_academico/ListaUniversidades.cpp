#include "ListaUniversidades.h"
#include <iostream>
#include <cstring>
using std::cout;
using std::endl;

ListaUniversidades::ListaUniversidades(int nd)
{
	numero_disc = nd;
	cont_disc = 0;
	pElUniversidadePrim = NULL;
	pElUniversidadeAtual = NULL;
}
ListaUniversidades::~ListaUniversidades()
{
	ElUniversidade *paux1, *paux2;
	paux1 = pElUniversidadePrim;
	paux2 = paux1;
	// Desaloca todos os elementos da lista
	while (paux1 != NULL)
	{
		paux2 = paux1->pProx;
		delete (paux1);
		paux1 = paux2;
	}
	pElUniversidadePrim = NULL;
	pElUniversidadeAtual = NULL;
}
// inclui uma nova universidade se houver espaco e a entrada for valida
void ListaUniversidades::incluaUniversidade(Universidade* pdi)
{
	ElUniversidade* paux;
	paux = new ElUniversidade();
	paux->setUniversidade(pdi);
	if (
		((cont_disc < numero_disc) && (pdi != NULL)) ||
		((numero_disc == -1) && (pdi != NULL))
		)
	{
		if (pElUniversidadePrim == NULL)
		{
			pElUniversidadePrim = paux;
			pElUniversidadeAtual = paux;
		}
		else
		{
			pElUniversidadeAtual->pProx = paux;
			paux->pAnte = pElUniversidadeAtual;
			pElUniversidadeAtual = paux;
		}
		cont_disc++;
	}
	else
	{
		cout << " Universidade n�o inclu�da "
			<< " Quantia de disc. j� lotada em "
			<< numero_disc << " Universidades." << endl;
	}
}
// percorre todos os elementos, mostrando-os em tela um a um
void ListaUniversidades::listeUniversidades()
{
	ElUniversidade* paux;
	paux = pElUniversidadePrim;
	if (paux == NULL) {
		cout << "nenhuma universidade cadastrada" << endl;
		return;
	}
	while (paux != NULL)
	{
		cout << " Universidade " << paux->getNome() << "." << endl;
		paux = paux->pProx;
	}
	cout << endl;
}
// localiza uma universidade de nome "n" na lista de universidades
Universidade* ListaUniversidades::localizar(char* n)
{
	ElUniversidade* paux;
	paux = pElUniversidadePrim;
	while (paux != NULL)
	{
		if (0 == strcmp(n, paux->getNome()))
		{
			return paux->getUniversidade();
		}
		paux = paux->pProx;
	}
	return NULL;
}
ElUniversidade* ListaUniversidades::getUniversidadePrim() {
	return pElUniversidadePrim;
}