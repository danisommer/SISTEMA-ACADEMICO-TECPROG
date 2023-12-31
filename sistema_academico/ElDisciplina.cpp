#include "ElDisciplina.h"

// classe de encapsulamento para a classe disciplina

ElDisciplina::ElDisciplina() = default;
ElDisciplina::~ElDisciplina() = default;

void ElDisciplina::setDisciplina(Disciplina *pa)
{
	pDisciplina = pa;
}
Disciplina* ElDisciplina::getDisciplina()
{
	return pDisciplina;
}
const char* ElDisciplina::getNome()
{
	return pDisciplina->getNome();
}
Departamento* ElDisciplina::getDepartamento() {
	return pDisciplina->getDepartamento();
}
