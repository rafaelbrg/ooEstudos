all: pessoa.o pessoaFisica.o pessoaJuridica.o main.o
	g++ -o main pessoa.o pessoaFisica.o pessoaJuridica.o main.o	

pessoa.o: pessoa.cpp pessoa.hpp
	g++ -c pessoa.cpp

pessoaFisica.o: pessoaFisica.cpp pessoaFisica.hpp
	g++ -c pessoaFisica.cpp

pessoaJuridica.o: pessoaJuridica.cpp pessoaJuridica.hpp
	g++ -c pessoaJuridica.cpp

main.o: main.cpp pessoa.hpp
	g++ -c main.cpp

clean: 
	rm -rf *.o

run:
	./main
