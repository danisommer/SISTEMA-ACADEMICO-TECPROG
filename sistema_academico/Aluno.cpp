#include "Aluno.h"
// construtora e destrutora
Aluno::Aluno(int i) : Pessoa(id)
{
	RA = 0;
}
Aluno::~Aluno() = default;
// sets e gets
void Aluno::setRA(int ra)
{
	RA = ra;
}
int Aluno::getRA() const
{
	return RA;
}
void Aluno::setDisciplina(Disciplina* pd)
{
	pDiscAssociada = pd;
}
Disciplina* Aluno::getDisciplina()
{
	return pDiscAssociada;
}
int Aluno::getId()
{
	return id;
}