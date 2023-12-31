// Data: 15/05/2017 - 1o Semestre de 2018
// Prof. Dr. Jean M. Simao - DAINF/UTFPR Curitiba-Central
// Autor: Monitor Vitor C. M. Correa

// UNIVERSIDADE TECNOLOGICA FEDERAL DO PARANA - Campus de Curitiba Central
// Departamento Academico de Informatica (DAINF)
// Disciplina: Tecnicas de Programacao - CSE20
// Sistema Academico - Slides 1 ao 8
// Exemplo de referencia para os exercicios e atividades propostos em sala

// Curso: Engenharia da Computacao / Sistemas de Informacao
// Turma: S71 / S02.

#include "Principal.h"
#include <fstream>
#include <iostream>

using namespace std;

Principal::Principal() : cont_idUniv(0), cont_idAluno(0), cont_idDisc(0), cont_idDepart(0) // contadores da quantidade de objetos existentes
{

}
Principal::~Principal() = default;
void Principal::Executar()
{
	Menu();
}
// Menu Principal
void Principal::Menu()
{
	int op = -1;
	while (op != 5)
	{
		system("cls");
		cout << " Informe sua opcao: " << endl;
		cout << " 1 - Cadastrar. " << endl;
		cout << " 2 - Executar. " << endl;
		cout << " 3 - Gravar. " << endl;
		cout << " 4 - Recuperar. " << endl;
		cout << " 5 - Sair. " << endl;
		cin >> op;

		switch (op)
		{
		case 1:
			MenuCad();
			break;
		case 2:
			MenuExe();
			break;
		case 3:
			MenuGravar();
			break;
		case 4:
			MenuRecuperar();
			break;
		case 5:
			cout << " FIM " << endl;
			break;
		default:
			cout << "opcao Invalida." << endl;
			system("pause");
			break;
		}
	}
}
// Menu para cadastros
void Principal::MenuCad()
{
	int op = -1;
	while (op != 5)
	{
		system("cls");
		cout << " Informe sua opcao: " << endl;
		cout << " 1 - Cadastrar Universidade. " << endl;
		cout << " 2 - Cadastrar Departamentos. " << endl;
		cout << " 3 - Cadastrar Disciplina. " << endl;
		cout << " 4 - Cadastrar Aluno. " << endl;
		cout << " 5 - Sair. " << endl;
		cin >> op;
		switch (op)
		{
		case 1:
			CadUniversidade();
			system("pause");
			break;
		case 2:
			CadDepartamento();
			system("pause");
			break;
		case 3:
			CadDisciplina();
			system("pause");
			break;
		case 4:
			CadAluno();
			system("pause");
			break;
		case 5:
			cout << " FIM " << endl;
			break;
		default:
			cout << "opcao Invalida." << endl;
			system("pause");
		}
	}
}
// Menu para listagem
void Principal::MenuExe()
{
	int op = -1;
	while (op != 5)
	{
		system("cls");
		cout << " Informe sua opcao: " << endl;
		cout << " 0 - Listar Tudo. " << endl;
		cout << " 1 - Listar Universidade. " << endl;
		cout << " 2 - Listar Departamentos." << endl;
		cout << " 3 - Listar Disciplinas. " << endl;
		cout << " 4 - Listar Alunos. " << endl;
		cout << " 5 - Sair. " << endl;
		cin >> op;
		switch (op)
		{
		case 0:
			cout << cont_idUniv << " universidades cadastradas" << endl;
			cout << cont_idDepart << " departamentos cadastrados" << endl;
			cout << cont_idDisc << " disciplinas cadastradas" << endl;
			cout << cont_idAluno << " alunos cadastrados" << endl;
			cout << endl;
			LUniversidades.listeUniversidades();
			LDepartamentos.listeDepartamentos();
			LDisciplinas.listeDisciplinas();
			LAlunos.listeAlunos();
			system("pause");
			break;
		case 1:
			cout << cont_idUniv << " universidades cadastradas" << endl;
			LUniversidades.listeUniversidades();
			system("pause");
			break;
		case 2:
			cout << cont_idDepart << " departamentos cadastrados" << endl;
			LDepartamentos.listeDepartamentos();
			system("pause");
			break;
		case 3:
			cout << cont_idDisc << " disciplinas cadastradas" << endl;
			LDisciplinas.listeDisciplinas();
			system("pause");
			break;
		case 4:
			cout << cont_idAluno << " alunos cadastrados" << endl;
			LAlunos.listeAlunos();
			system("pause");
			break;
		case 5:
			cout << " FIM " << endl;
			break;
		default:
			cout << "opcao Invalida." << endl;
			system("pause");
		}
	}
}
// Menu para gravacoes em arquivo
void Principal::MenuGravar()
{
	int op = -1;
	while (op != 5)
	{
		system("cls");
		cout << " Informe sua opcao: " << endl;
		cout << " 0 - Gravar Tudo. " << endl;
		cout << " 1 - Gravar Universidades. " << endl;
		cout << " 2 - Gravar Departamentos. " << endl;
		cout << " 3 - Gravar Disciplinas. " << endl;
		cout << " 4 - Gravar Alunos. " << endl;
		cout << " 5 - Sair. " << endl;
		cin >> op;
		switch (op)
		{
		case 0:
			GravarTudo();
			system("pause");
			break;
		case 1:
			GravarUniversidades();
			system("pause");
			break;
		case 2:
			GravarDepartamentos();
			system("pause");
			break;
		case 3:
			GravarDisciplinas();
			system("pause");
			break;
		case 4:
			GravarAlunos();
			system("pause");
			break;
		case 5:
			cout << " FIM " << endl;
			break;
		default:
			cout << "opcao Invalida." << endl;
			system("pause");
		}
	}
}
// Menu para recuperacao dos arquivos
void Principal::MenuRecuperar()
{
	int op = -1;
	while (op != 5)
	{
		system("cls");
		cout << " Informe sua opcao: " << endl;
		cout << " 0 - Recuperar Tudo. " << endl;
		cout << " 1 - Recuperar Universidades. " << endl;
		cout << " 2 - Recuperar Departamentos. " << endl;
		cout << " 3 - Recuperar Disciplinas. " << endl;
		cout << " 4 - Recuperar Alunos. " << endl;
		cout << " 5 - Sair. " << endl;
		cin >> op;
		switch (op)
		{
		case 0:
			RecuperarTudo();
			system("pause");
			break;
		case 1:
			RecuperarUniversidades();
			system("pause");
			break;
		case 2:
			RecuperarDepartamentos();
			system("pause");
			break;
		case 3:
			RecuperarDisciplinas();
			system("pause");
			break;
		case 4:
			RecuperarAlunos();
			system("pause");
			break;
		case 5:
			cout << " FIM " << endl;
			break;
		default:
			cout << "opcao Invalida." << endl;
			system("pause");
		}
	}
}
// funcoes para cadastro de novos objetos
void Principal::CadUniversidade()
{
	char nomeUniversidade[150];
	cout << "Qual o nome da universidade." << endl;
	cin >> nomeUniversidade;
	Universidade* puniv = new Universidade(cont_idUniv++);
	puniv->setNome(nomeUniversidade);
	LUniversidades.incluaUniversidade(puniv);
	cout << " Universidade cadastrada " << endl;
}
void Principal::CadDepartamento()
{
	char nomeUniversidade[150];
	char nomeDepartamento[150];
	cout << "Qual o nome da universidade do departamento" << endl;
	cin >> nomeUniversidade;
	Universidade* puniv = LUniversidades.localizar(nomeUniversidade);
	if (puniv != NULL)
	{
		cout << "Qual o nome do departamento" << endl;
		cin >> nomeDepartamento;
		Departamento* pdepart = new Departamento(cont_idDepart++);
		pdepart->setNome(nomeDepartamento);
		puniv->incluaDepartamento(pdepart);
		LDepartamentos.incluaDepartamento(pdepart);
		cout << " Departamento cadastrado " << endl;
	}
	else
	{
		cout << " Universidade inexistente. " << endl;
		cout << " O cadastro nao pode ser concluido. " << endl;
	}
}
void Principal::CadDisciplina() {
	char nomeDepartamento[150];
	char nomeDisciplina[150];
	cout << "Qual o nome do departamento da disciplina" << endl;
	cin >> nomeDepartamento;
	Departamento* pdepart = LDepartamentos.localizar(nomeDepartamento);
	if (pdepart != NULL)
	{
		cout << "Qual o nome da disciplina" << endl;
		cin >> nomeDisciplina;
		Disciplina* pdisc = new Disciplina(cont_idDisc++);
		pdisc->setNome(nomeDisciplina);
		pdepart->incluaDisciplina(pdisc);
		LDisciplinas.incluaDisciplina(pdisc);
		cout << " Disciplina cadastrada " << endl;
	}
	else
	{
		cout << " Departamento inexistente. " << endl;
		cout << " O cadastro nao pode ser concluido. " << endl;
	}
}
void Principal::CadAluno()
{
	char nomeAluno[150];
	char nomeDisciplina[150];
	int ra;
	Aluno* pal;
	cout << "Qual a disciplina em que o aluno esta matriculado?" << endl;
	cin >> nomeDisciplina;
	Disciplina* pdisc = LDisciplinas.localizar(nomeDisciplina);
	if (pdisc != NULL)
	{
		cout << "Qual o nome do aluno?" << endl;
		cin >> nomeAluno;
		cout << "Qual o RA do aluno?" << endl;
		cin >> ra;
		pal = new Aluno(cont_idAluno++);
		pal->setNome(nomeAluno);
		pal->setRA(ra);
		pdisc->incluaAluno(pal);
		LAlunos.incluaAluno(pal);
		cout << " Aluno cadastrado " << endl;
	}
	else
	{
		cout << " Disciplina inexistente. " << endl;
		cout << " O cadastro nao pode ser concluido. " << endl;
	}
}
// funcoes para a gravacao de objetos em arquivo
void Principal::GravarTudo() {
	GravarUniversidades();
	GravarDepartamentos();
	GravarDisciplinas();
	GravarAlunos();
}
void Principal::GravarUniversidades() {
	std::ofstream out("universidades.dat", std::ios::out);
	if (out) {
		ElUniversidade* paux = LUniversidades.getUniversidadePrim();
		while (paux != NULL) {
			out << (paux->getUniversidade())->getNome() << " " << (paux->getUniversidade())->getId() << endl;
			paux = paux->pProx;
		}
		cout << " As universidades foram gravadas " << endl;
	}
	else {
		std::cerr << " Arquivo nao pode ser aberto " << endl;
		return;
	}
	out.close();
}
void Principal::GravarDepartamentos() {
	std::ofstream out("departamentos.dat", std::ios::out);
	if (out) {
		ElDepartamento* paux = LDepartamentos.getDepartamentoPrim();
		while (paux != NULL) {
			out << (paux->getDepartamento())->getNome() << " " << (paux->getDepartamento())->getId()
				<< " " << (paux->getUniversidade())->getNome() << endl;
			paux = paux->pProx;
		}
		cout << " Os departamentos foram gravados " << endl;
	}
	else {
		std::cerr << " Arquivo nao pode ser aberto " << endl;
		return;
	}
	out.close();
}
void Principal::GravarDisciplinas() {
	std::ofstream out("disciplinas.dat", std::ios::out);
	if (out) {
		ElDisciplina* paux = LDisciplinas.getDisciplinaPrim();
		while (paux != NULL) {
			out << (paux->getDisciplina())->getNome() << " " << (paux->getDisciplina())->getId()
				<< " " << (paux->getDepartamento())->getNome() << endl;
			paux = paux->pProx;
		}
		cout << " As disciplinas foram gravadas " << endl;
	}
	else {
		std::cerr << " Arquivo nao pode ser aberto " << endl;
		return;
	}
	out.close();
}
void Principal::GravarAlunos() {
	std::ofstream out("alunos.dat", std::ios::out);
	if (out) {
		ElAluno* paux = LAlunos.getAlunoPrim();
		while (paux != NULL) {
			out << (paux->getAluno())->getNome() << " " << (paux->getAluno())->getRA() << " " <<
				(paux->getAluno())->getId() << " " << (paux->getDisciplina())->getNome() << endl;
			paux = paux->pProx;
		}
		cout << " Os alunos foram gravados " << endl;
	}
	else {
		std::cerr << " Arquivo nao pode ser aberto " << endl;
		return;
	}
	out.close();
}
// funcoes para a recuperacao de objetos em arquivo
void Principal::RecuperarTudo() {
	RecuperarUniversidades();
	RecuperarDepartamentos();
	RecuperarDisciplinas();
	RecuperarAlunos();
}
void Principal::RecuperarUniversidades() {
	std::ifstream in("universidades.dat", std::ios::in);
	if (in) {
		char nome[150];
		int id;
		while (in >> nome >> id) {
			Universidade* puniv = new Universidade(id);
			puniv->setNome(nome);
			LUniversidades.incluaUniversidade(puniv);
			cont_idUniv++;
		}
		cout << " As universidades foram recuperadas " << endl;
	}
	else {
		std::cerr << " Arquivo nao pode ser aberto " << endl;
		return;
	}
	in.close();
}
void Principal::RecuperarDepartamentos() {
	std::ifstream in("departamentos.dat", std::ios::in);
	if (in) {
		char nome[150], nomeuniv[150];
		int id;
		while (in >> nome >> id >> nomeuniv) {
			Universidade* puniv = LUniversidades.localizar(nomeuniv);
			if (puniv) {
				Departamento* pdep = new Departamento(id);
				pdep->setNome(nome);
				puniv->incluaDepartamento(pdep);
				LDepartamentos.incluaDepartamento(pdep);
				cont_idDepart++;
			}
			else {
				cout << " universidade " << nomeuniv << " nao encontrada " << endl;
				cout << " departamento " << nome << " nao incluido " << endl;
				cout << endl;
			}
		}
		cout << " Os departamentos foram recuperados " << endl;
	}
	else {
		std::cerr << " Arquivo nao pode ser aberto " << endl;
		return;
	}
	in.close();
}
void Principal::RecuperarDisciplinas() {
	std::ifstream in("disciplinas.dat", std::ios::in);
	if (in) {
		char nome[150], nomedep[150];
		int id;
		while (in >> nome >> id >> nomedep) {
			Departamento* pdep = LDepartamentos.localizar(nomedep);
			if (pdep) {
				Disciplina* pdisc = new Disciplina(id);
				pdisc->setNome(nome);
				pdep->incluaDisciplina(pdisc);
				LDisciplinas.incluaDisciplina(pdisc);
				cont_idDisc++;
			}
			else {
				cout << " departamento " << nomedep << " nao encontrado " << endl;
				cout << " disciplina " << nome << " nao incluida " << endl;
				cout << endl;
			}
		}
		cout << " As disciplinas foram recuperados " << endl;
	}
	else {
		std::cerr << " Arquivo nao pode ser aberto " << endl;
		return;
	}
	in.close();
}
void Principal::RecuperarAlunos() {
	std::ifstream in("alunos.dat", std::ios::in);
	if (in) {
		char nome[150], nomedisc[150];
		int id, RA;
		while (in >> nome >> RA >> id >> nomedisc) {
			Disciplina* pdisc = LDisciplinas.localizar(nomedisc);
			if (pdisc) {
				Aluno* pal = new Aluno(id);
				pal->setNome(nome);
				pal->setRA(RA);
				pdisc->incluaAluno(pal);
				LAlunos.incluaAluno(pal);
				cont_idAluno++;
			}
			else {
				cout << " disciplina " << nomedisc << " nao encontrada " << endl;
				cout << " aluno " << nome << " nao incluido " << endl;
				cout << endl;
			}
		}
		cout << " Os alunos foram recuperados " << endl;
	}
	else {
		std::cerr << " Arquivo nao pode ser aberto " << endl;
		return;
	}
	in.close();
}