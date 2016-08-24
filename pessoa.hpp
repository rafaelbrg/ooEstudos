#ifndef PESSOA_HPP
#define PESSOA_HPP

#include <iostream>
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
<<<<<<< HEAD
	~Pessoa();
=======
>>>>>>> 54b53e215fcbc6a3b1db74e1cbbaba5e96c9b1d3

	string getNome();
	void setNome(string nome);
	string getTelefone();
	void setTelefone(string telefone);
	string getEndereco();
	void setEndereco(string endereco);
};

#endif


