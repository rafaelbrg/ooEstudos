#ifndef PESSOAJURIDICA_HPP
#define PESSOAJURIDICA_HPP

#include "pessoa.hpp"
#include <string>
#include <iostream>

using namespace std;

class PessoaJuridica:public Pessoa{

private:
	string cnpj;

public:
	PessoaJuridica();
	PessoaJuridica(string nome, string telefone, string endereco, string cnpj);
	~PessoaJuridica();

	void setCnpj(string cnpj);
	string getCnpj();
	string toString();
};

#endif 
