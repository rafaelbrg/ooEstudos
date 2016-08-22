#include "pessoaFisica.hpp"
#include <string>
#include <iostream>

PessoaFisica::PessoaFisica(){
	cpf = "00000000000"
}
void PessoaFisica::setCpf(string cpf){
	this->cpf = cpf;
}
string PessoaFisica::getCpf(){
	return cpf;
}
