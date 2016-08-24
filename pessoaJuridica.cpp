#include "pessoaJuridica.hpp"
#include <iostream>
#include <string>

using namespace std;

PessoaJuridica::PessoaJuridica(){

}
PessoaJuridica::PessoaJuridica(string nome, string telefone, string endereco,string cnpj):
Pessoa(nome,telefone,endereco){
	this->cnpj = cnpj;
}
PessoaJuridica::~PessoaJuridica(){

}

void PessoaJuridica::setCnpj(string cnpj){
	this->cnpj = cnpj;
}
string PessoaJuridica::getCnpj(){
	return cnpj;
}

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
