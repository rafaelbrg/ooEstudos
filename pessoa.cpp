#include "pessoa.hpp"

Pessoa::Pessoa(){
	nome="rafael";
	telefone="00000000";
	endereco="lalala";
}

string Pessoa::getNome(){
	return nome;
}
void Pessoa::setNome(string nome){
	this->nome = nome;
}

string Pessoa::getTelefone(){
	return telefone;
}

void Pessoa::setTelefone(string telefone){
	this->telefone = telefone;
}

string Pessoa::getEndereco(){
	return endereco;
}

void Pessoa::setEndereco(string endereco){
	this->endereco = endereco;
}
