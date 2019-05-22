#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std;


FILE* abrir_arquivo (char *fname)
{
	FILE *arquivo;

	arquivo = fopen(fname, "rb+");

	if (arquivo == NULL) {
		arquivo = fopen(fname, "wb");

		if (arquivo == NULL) {
			printf("impossivel criar arquivo %s\n", fname);
			exit(1);
		}

		fclose(arquivo);

		arquivo = fopen(fname, "rb+");

		if (arquivo == NULL) {
			printf("impossivel abrir arquivo %s\n", fname);
			exit(1);
		}
	}

	return arquivo;
}


 struct Cliente{
  int idCliente;
  char nome [100];
  int anoNasimento;
  char email [100];

};

void inserirCliente ()
{
	FILE *arquivo;
	int n;

    Cliente cliente;

	  arquivo = abrir_arquivo("cliente.dat");

    cout <<"informe o id"<<endl;
    cin>> cliente.idCliente;

    cout <<"informe nome do cliente "<<endl;
    cin>> cliente.nome;

    cout <<"digite ano de nasimento"<<endl;
    cin>> cliente.anoNasimento;

    cout <<"informe seu email"<<endl;
    cin>>cliente.email;

	 fwrite(&cliente, sizeof(cliente),(1), arquivo);

	 
}

void mostrarCliente(){

        

}


int main ()
{
	inserirCliente();
  

	return 0;
}

