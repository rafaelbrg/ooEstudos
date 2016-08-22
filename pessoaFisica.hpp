#ifndef PESSOAFISICA_HPP
#define PESSOAFISICA_HPP

#include <string>
#include <iostream>
#include "pessoa.hpp"

using namespace std;

class PessoaFisica:public Pessoa{

private:
	string cpf;

public:
	PessoaFisica(string nome, string telefone, string endereco, string cpf);
	~PessoaFisica();
	void PessoaFisica::setCpf(string cpf);
	string PessoaFisica::getCpf();
}

#endif
