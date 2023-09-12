#include "ElUniversidade.h"

// classe de encapsulamento para a classe universidade

ElUniversidade::ElUniversidade() = default;
ElUniversidade::~ElUniversidade() = default;

void ElUniversidade::setUniversidade(Universidade *pa)
{
	pUniversidade = pa;
}
Universidade* ElUniversidade::getUniversidade()
{
	return pUniversidade;
}
const char* ElUniversidade::getNome()
{
	return pUniversidade->getNome();
}