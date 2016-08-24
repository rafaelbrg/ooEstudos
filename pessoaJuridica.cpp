#include "pessoaJuridica.hpp"
#include <iostream>
#include <string>

using namespace std;

PessoaJuridica::PessoaJuridica(){

}
<<<<<<< HEAD
PessoaJuridica::PessoaJuridica(string nome, string telefone, string endereco,string cnpj):
Pessoa(nome,telefone,endereco){
	this->cnpj = cnpj;
}
PessoaJuridica::~PessoaJuridica(){

}
=======
PessoaJuridica::PessoaJuridica(string cnpj){
	this->cnpj = cnpj;
}

>>>>>>> 54b53e215fcbc6a3b1db74e1cbbaba5e96c9b1d3

void PessoaJuridica::setCnpj(string cnpj){
	this->cnpj = cnpj;
}
string PessoaJuridica::getCnpj(){
	return cnpj;
}
<<<<<<< HEAD

string PessoaJuridica::toString(){
	
	string s;
	
	s.append(this->getNome());
	s.append(" ");
	s.append(this->getTelefone());
	s.append(" ");
	s.append(this->getEndereco());
	s.append(" ");
	s.append(this->getCnpj());

	return s;
}
=======
>>>>>>> 54b53e215fcbc6a3b1db74e1cbbaba5e96c9b1d3
