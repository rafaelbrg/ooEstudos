#include "pessoaJuridica.hpp"
#include <iostream>
#include <string>

using namespace std;

PessoaJuridica::PessoaJuridica(){

}
PessoaJuridica::PessoaJuridica(string cnpj){
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