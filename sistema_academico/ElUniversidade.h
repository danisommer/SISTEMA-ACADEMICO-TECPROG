#pragma once
#include "Universidade.h"

class ElUniversidade
{
private:
	Universidade* pUniversidade{};
public:
	ElUniversidade();
	~ElUniversidade();
	ElUniversidade* pProx{};
	ElUniversidade* pAnte{};
	void setUniversidade(Universidade* pa);
	Universidade* getUniversidade();
	const char* getNome();
};
