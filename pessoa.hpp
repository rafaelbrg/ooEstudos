#ifndef PESSOA_HPP
#define PESSOA_HPP

#include <string>

using namespace std;

class Pessoa{
private:
	string nome;
	string telefone;
	string endereco;
	
public:
	Pessoa();
	Pessoa(string nome, string telefone, string endereco);
	~Pessoa();
	string Pessoa::getNome();
	void Pessoa::setNome(string nome);
	string Pessoa::getTelefone();
	void Pessoa::setTelefone(string telefone);
	string Pessoa::getEndereco();
	void Pessoa::setEndereco(string endereco);
}

#endif


