#include "ElAluno.h"

// classe de encapsulamento para a classe aluno

ElAluno::ElAluno() = default;
ElAluno::~ElAluno() = default;

void ElAluno::setAluno(Aluno *pa)
{
	pAluno = pa;
}
Aluno* ElAluno::getAluno()
{
	return pAluno;
}
const char* ElAluno::getNome()
{
	return pAluno->getNome();
}
Disciplina* ElAluno::getDisciplina() {
	return pAluno->getDisciplina();
}
