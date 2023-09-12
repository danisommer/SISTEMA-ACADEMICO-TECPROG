#include "Departamento.h"
#include "ListaDisciplinas.h"
#include "Universidade.h"
#include "Disciplina.h"
#include <cstring>

// construtora e destrutora
Departamento::Departamento(int Id)
{
	id = Id;
	pObjLDisciplinas = new ListaDisciplinas(-1);
}
Departamento::~Departamento()
{
    delete pObjLDisciplinas;
}
// sets e gets
void Departamento::setNome(const char* n)
{
	strcpy_s(nome, n);
}
const char* Departamento::getNome()
{
	return nome;
}
void Departamento::setUniversidade(Universidade* pu)
{
	pUniv = pu;
}
Universidade* Departamento::getUniversidade()
{
	return pUniv;
}
int Departamento::getId() const {
	return id;
}

// metodos de inclusao na lista e de listagem
void Departamento::incluaDisciplina(Disciplina* pdi)
{
	pObjLDisciplinas->incluaDisciplina(pdi);
	pdi->setDepartamento(this);
}
void Departamento::listeDisciplinas()
{
	pObjLDisciplinas->listeDisciplinas();
}
