#ifndef PESSOAFISICA_HPP
#define PESSOAFISICA_HPP

#include "pessoa.hpp"
#include <string>
#include <iostream>

using namespace std;

class PessoaFisica:public Pessoa{

private:
	string cpf;

public:
	PessoaFisica();
	PessoaFisica(string nome, string telefone, string endereco, string cpf);
	~PessoaFisica();

	void setCpf(string cpf);
	string getCpf();
	string toString();
};

#endif
