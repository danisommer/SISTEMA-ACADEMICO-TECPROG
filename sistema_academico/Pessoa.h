#pragma once
#include "Universidade.h"
#include <string>

class Pessoa
{
protected:
	int diaP;
	int mesP;
	int anoP;
	int idadeP;
	char nomeP[30];
	int id;
public:
	Pessoa(int id);
	~Pessoa();
	void inicializa(int diaNa, int mesNa, int anoNa, const char* nome);
	void Calc_Idade(int diaAT, int mesAT, int anoAT);
	int informaIdade();
	void setId(int i);

    virtual int getId();
	void setNome(const char* n);
	const char* getNome();
};