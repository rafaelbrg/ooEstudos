#include "pessoa.hpp"
#include "pessoaFisica.hpp"
#include "pessoaJuridica.hpp"
#include <iostream> 
using namespace std;

int main(){

	PessoaFisica * umaPessoa = new PessoaFisica("Rafael","123456",
	"cond. village ap 1202","00000000000");
	PessoaJuridica * umaPessoaJuridica  = new PessoaJuridica("Coca-cola","98765432",
	"Sao Paulo", "98198399139abcd");
	cout << umaPessoa->toString() << endl;
	cout << umaPessoaJuridica->toString() << endl;
	return 0;
}

