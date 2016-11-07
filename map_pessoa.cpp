/*
UFPB - CENTRO DE INFORMATICA
DISCIPLINA: LOGICA DE PROGRAMACAO I
ATIVIDADE 2 - VALENDO PONTO
AUTOR: BRUNO CORREIA
DATA: 07/11/2016
VERSÃO: 0.001

USANDO A CLASSE MAP

CRÉDITOS:
http://stackoverflow.com/questions/8333358/how-can-i-use-a-stdmap-iterator-inside-a-templated-class

*/

#include <map>
#include <string>
#include <iostream>

using namespace std;

template <class P>
class Pessoa{
	typedef map<string, P> mapaPessoa;
	typedef typename mapaPessoa::iterator Iterador;
	
	mapaPessoa individuo;
public:
	void inserir(const string Nome, const P& CPF) { individuo[Nome] = CPF ; }

	void exibir(){
		cout<<endl<<"Chave"<<'\t'<<'\t'<<"Valor"<<endl;
		for ( Iterador iter = individuo.begin() ; iter != individuo.end() ; iter++ ){
			cout<<iter->first<<'\t'<<'\t'<<iter->second<<endl;
		}
		cout<<endl;
	}

};

int main() {

	Pessoa<string> pessoa;

	pessoa.inserir("FULANO", "XXXXXXXXXXX");
	pessoa.inserir("SICRANO", "WWWWWWWWWWW");
	pessoa.inserir("OUTRO", "ZZZZZZZZZZZ");

	pessoa.exibir();

	return 0;

};
