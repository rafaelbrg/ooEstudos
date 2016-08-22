#ifndef PESSOAJURIDICA_HPP
#define PESSOAJURIDICA_HPP

#include <string>
#include <iostream>

using namespace std;

class PessoaJuridica:public Pessoa{

private:
	string cnpj;

public:
	PessoaJuridica();
	PessoaJuridica(string cnpj);

	void setCnpj(string cnpj);
	string getCnpj();
};

#endif 
