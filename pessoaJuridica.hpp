#ifndef PESSOAJURIDICA_HPP
#define PESSOAJURIDICA_HPP

#include <string>
#include <iostream>
#include "pessoa.hpp"

using namespace std;

class PessoaJuridica:public Pessoa{

private:
	string cnpj;

public:
	PessoaJuridica(string nome, string telefone, string endereco,
	string cnpj);
	~PessoaJuridica();
	void PessoaJuridica::setCnpj(string cnpj);
	string PessoaJuridica::getCnpj();
}

#endif 
