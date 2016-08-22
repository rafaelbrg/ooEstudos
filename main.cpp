#include "pessoa.hpp"
#include "pessoaFisica.hpp"
#include "pessoaJuridica.hpp"
#include <iostream> 
using namespace std;

int main(){

	PessoaFisica * umaPessoa = new PessoaFisica("Rafael","123456",
	"cond. village ap 1202","00000000000");
	//umaPessoa.setNome("Rafael");
	//umaPessoa.setTelefone("123456");
	//umaPessoa.setEndereco("cond. Village");
	//umaPessoa.setCpf("123.456.789.11");
	cout << umaPessoa->toString() << endl;
	return 0;
}

