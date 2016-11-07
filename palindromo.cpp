/*
UFPB - CENTRO DE INFORMATICA
DISCIPLINA: LOGICA DE PROGRAMACAO I
ATIVIDADE 2 - VALENDO PONTO
AUTOR: BRUNO CORREIA
DATA: 06/11/2016
VERSÃO: 0.001

PALINDROMO

*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// PARA ATIVAR DEBUG, DEFINIR  != 0
#define DEBUG 1

bool isPalindromo( vector<string>::iterator inicio, vector<string>::iterator fim, int impar){

	int i ;

	if ( impar == 1 ){

		 if ( DEBUG ){
                        cout<<endl<<"!--- INI DEBUG ---!"<<endl;
                        cout<<"QUANTIDADE DE ELEMENTOS IMPAR";
                        cout<<endl<<"!--- FIM DEBUG ---!"<<endl;
                }

		for ( i=0 ; inicio != fim ; inicio++ , fim-- ){

			if ( DEBUG ){
				cout<<endl<<"!--- INI DEBUG ---!"<<endl;
				cout<<"Interacao: "<<++i<<" | Valores comparados: "<<*inicio<<" "<<*fim;
				cout<<endl<<"!--- FIM DEBUG ---!"<<endl;	
			}
		
			if ( *inicio != *fim ){	
				cout<<endl<<"NAO E UM PALINDROMO!"<<endl<<endl;
				return false;
			}

		}

		cout<<endl<<"E UM PALINDROMO!"<<endl<<endl;
		return true;

	} else {

		if ( DEBUG ){
                	cout<<endl<<"!--- INI DEBUG ---!"<<endl;
                        cout<<"QUANTIDADE DE ELEMENTOS PAR";
                        cout<<endl<<"!--- FIM DEBUG ---!"<<endl;
                }


		for ( i=0 ; inicio != --fim ; inicio++ , fim-- ){

                        if ( DEBUG ){
                                cout<<endl<<"!--- INI DEBUG ---!"<<endl;
                                cout<<"Interacao: "<<++i<<" | Valores comparados: "<<*inicio<<" "<<*(++fim);
                                cout<<endl<<"!--- FIM DEBUG ---!"<<endl;
                        } else {
				++fim;
			}

                        if ( *inicio != *fim ){
                                cout<<endl<<"NAO E UM PALINDROMO!"<<endl<<endl;
                                return false;
                        }

                }

		if ( inicio == fim ){

			if ( DEBUG ){
                                cout<<endl<<"!--- INI DEBUG ---!"<<endl;
                                cout<<"Interacao: "<<++i<<" | Valores comparados: "<<*inicio<<" "<<*(++fim);
                                cout<<endl<<"!--- FIM DEBUG ---!"<<endl;
                        } else {
				++fim;
			}

			if ( *inicio == *fim ){
				cout<<endl<<"E UM PALINDROMO!"<<endl<<endl;
                		return true;
			} else {
				cout<<endl<<"NAO E UM PALINDROMO!"<<endl<<endl;
                                return false;
			}

		}

	}
	
}

int main(){

	int i=0, tamanhoVetor;
	string value;
	vector<string> vetorPalindromo;
	
	// ESPACAR PRIMEIRA LINHA
	cout<<endl;

	while ( value != "fim" ){
		cout<<"Digite a entrada na posicao "<<++i<<" (ou \"fim\" para parar): ";
		cin>>value;
		vetorPalindromo.push_back(value);
	}

	tamanhoVetor=vetorPalindromo.size();

	isPalindromo(vetorPalindromo.begin(),----vetorPalindromo.end(),--tamanhoVetor%2);

	return 0;
}
