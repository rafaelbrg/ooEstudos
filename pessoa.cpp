#include "pessoa.hpp"

#include <iostream>
#include <string>

using namespace std;

Pessoa::Pessoa(){

}
Pessoa::Pessoa(string nome, string telefone, string endereco){
	this->nome = nome;
	this->telefone = telefone;
	this->endereco = endereco;
}
<<<<<<< HEAD
Pessoa::~Pessoa(){

}
=======

>>>>>>> 54b53e215fcbc6a3b1db74e1cbbaba5e96c9b1d3


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

