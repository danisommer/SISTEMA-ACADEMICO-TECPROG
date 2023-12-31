#include "Pessoa.h"
#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

// construtora e destrutora
Pessoa::Pessoa(int Id) : nomeP("")
{
	id = Id;
	idadeP = 0;
}
Pessoa::~Pessoa() 
{
}

// metodos de inicializacao e calculo de idade
void Pessoa::inicializa(int diaNa, int mesNa, int anoNa, const char* nome) {
	diaP = diaNa;
	mesP = mesNa;
	anoP = anoNa;
	strcpy_s(nomeP, nome);
}

void Pessoa::Calc_Idade(int diaAT, int mesAT, int anoAT)
{
	idadeP = anoAT - anoP;
	if (mesP < mesAT)
	{
		idadeP = idadeP - 1;
	}
	else
	{
		if (mesP == mesAT)
		{
			if (diaP < diaAT)
			{
				idadeP = idadeP - 1;
			}
		}
	}
	// o comando passa a ser encapsulado dentro do m�todo...
	cout << "A idade da Pessoa " << nomeP << " seria " << idadeP << endl;
}
int Pessoa::informaIdade()
{
	return idadeP;
}

// sets e gets
void Pessoa::setId(int i) {
	id = i; 
}
int Pessoa::getId() {
	return id; 
}
void Pessoa::setNome(const char* n) {
	strcpy_s(nomeP, n);
}
const char* Pessoa::getNome() {
	return nomeP;
}
