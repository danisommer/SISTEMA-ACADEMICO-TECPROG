#pragma once
#include "Pessoa.h"

class Aluno : public Pessoa
{
private:
	int RA;
	Disciplina* pDiscAssociada{};
public:
	explicit Aluno(int i);
	~Aluno();
	void setRA(int ra);
	int getRA() const;
	void setDisciplina(Disciplina* pd);
	Disciplina* getDisciplina();
	int getId() override;
};