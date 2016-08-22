#include "pessoaJuridica.hpp"

PessoaJuridica::PessoaJuridica(){
	cnpj = " ";
}

void PessoaJuridica::setCnpj(string cnpj){
	this->cnpj = cnpj;
}
string PessoaJuridica::getCnpj(){
	return cnpj;
}
