#include "ElDepartamento.h"

// classe de encapsulamento para a classe departamento

ElDepartamento::ElDepartamento() = default;
ElDepartamento::~ElDepartamento() = default;

void ElDepartamento::setDepartamento(Departamento *pd)
{
	pDepartamento = pd;
}
Departamento* ElDepartamento::getDepartamento()
{
	return pDepartamento;
}
const char* ElDepartamento::getNome()
{
	return pDepartamento->getNome();
}
Universidade* ElDepartamento::getUniversidade() {
	return pDepartamento->getUniversidade();
}
