#include "pessoa.hpp"
#include "pessoaFisica.hpp"
#include "pessoaJuridica.hpp"
#include <iostream> 
using namespace std;

int main(){

	PessoaFisica * umaPessoa = new PessoaFisica("Rafael","123456",
	"cond. village ap 1202","00000000000");
<<<<<<< HEAD
	PessoaJuridica * umaPessoaJuridica  = new PessoaJuridica("Coca-cola","98765432",
	"Sao Paulo", "98198399139abcd");
	cout << umaPessoa->toString() << endl;
	cout << umaPessoaJuridica->toString() << endl;
=======
	//umaPessoa.setNome("Rafael");
	//umaPessoa.setTelefone("123456");
	//umaPessoa.setEndereco("cond. Village");
	//umaPessoa.setCpf("123.456.789.11");
	cout << umaPessoa->toString() << endl;
>>>>>>> 54b53e215fcbc6a3b1db74e1cbbaba5e96c9b1d3
	return 0;
}

