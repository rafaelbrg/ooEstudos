#include "pessoaFisica.hpp"
#include <string>
#include <iostream>

using namespace std;

PessoaFisica::PessoaFisica(){

}
PessoaFisica::PessoaFisica(string nome, string telefone, string endereco, string cpf):
Pessoa(nome,telefone,endereco){
	this->cpf = cpf;
}
<<<<<<< HEAD
PessoaFisica::~PessoaFisica(){

}
=======
>>>>>>> 54b53e215fcbc6a3b1db74e1cbbaba5e96c9b1d3

void PessoaFisica::setCpf(string cpf){
	this->cpf = cpf;
}
string PessoaFisica::getCpf(){
	return cpf;
}
<<<<<<< HEAD

=======
>>>>>>> 54b53e215fcbc6a3b1db74e1cbbaba5e96c9b1d3
string PessoaFisica::toString(){

	std::string s;
	s.append(this->getNome());
	s.append(" ");
	s.append(this->getTelefone());
	s.append(" ");
	s.append(this->getEndereco());
	s.append(" ");
	s.append(this->getCpf());
	return s;
}
<<<<<<< HEAD

=======
>>>>>>> 54b53e215fcbc6a3b1db74e1cbbaba5e96c9b1d3
