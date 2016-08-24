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
<<<<<<< HEAD
	PessoaFisica(string nome, string telefone, string endereco, string cpf);
	~PessoaFisica();
=======
	PessoaFisica(string nome, string telefone, string endereco,string cpf);
>>>>>>> 54b53e215fcbc6a3b1db74e1cbbaba5e96c9b1d3

	void setCpf(string cpf);
	string getCpf();
	string toString();
};

#endif
