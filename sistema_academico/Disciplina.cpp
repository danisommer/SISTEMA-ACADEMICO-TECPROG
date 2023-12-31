#include "Disciplina.h"
#include <cstring>

// construtora e destrutora
Disciplina::Disciplina(int id, int tamanho_lista, const char* ac) :
	ObjLAlunos(tamanho_lista)
{
	pDeptoAssociado = NULL;
	strcpy_s(area_conhecimento, ac);
}
Disciplina::~Disciplina()
{
	pDeptoAssociado = NULL;
}
// sets e gets
void Disciplina::setId(int n)
{
	id = n;
}
int Disciplina::getId() const
{
	return id;
}
void Disciplina::setNome(const char* n)
{
	strcpy_s(nome, n);
}
const char* Disciplina::getNome()
{
	return nome;
}
void Disciplina::setDepartamento(Departamento* pd)
{
	pDeptoAssociado = pd;
}
Departamento* Disciplina::getDepartamento() {
	return pDeptoAssociado;
}
// metodos de inclusao na lista e de listagem
void Disciplina::incluaAluno(Aluno* pa)
{
	ObjLAlunos.incluaAluno(pa);
	pa->setDisciplina(this);
}
void Disciplina::listeAlunos()
{
	ObjLAlunos.listeAlunos();
}