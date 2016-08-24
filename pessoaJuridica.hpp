#ifndef PESSOAJURIDICA_HPP
#define PESSOAJURIDICA_HPP

<<<<<<< HEAD
#include "pessoa.hpp"
=======
>>>>>>> 54b53e215fcbc6a3b1db74e1cbbaba5e96c9b1d3
#include <string>
#include <iostream>

using namespace std;

class PessoaJuridica:public Pessoa{

private:
	string cnpj;

public:
	PessoaJuridica();
<<<<<<< HEAD
	PessoaJuridica(string nome, string telefone, string endereco, string cnpj);
	~PessoaJuridica();

	void setCnpj(string cnpj);
	string getCnpj();
	string toString();
=======
	PessoaJuridica(string cnpj);

	void setCnpj(string cnpj);
	string getCnpj();
>>>>>>> 54b53e215fcbc6a3b1db74e1cbbaba5e96c9b1d3
};

#endif 
