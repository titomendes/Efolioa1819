#ifndef ANIMAL_H
#define ANIMAL_H
#include "Intervencao.h"
#include<string>
#include<list>

using namespace std;


class Animal
{
private:
	enum Especie{ cao,gato };
	Especie tipo;
	string nome;
	string dono;
	int telefone;
	string morada;
	string raca;
	int idade;

	

public:
	Animal(string nome, string dono, int telefone, string morada, string raca, int idade,Especie tipo);
	~Animal();
	Especie getTipo();
	void setTipo(Especie tipo);
	string getNome();
	void setNome(string nome);
	string getDono();
	void setDono(string dono);
	int getTelefone();
	void setTelefone(int telefone);
	string getMorada();
	void setMorada(string morada);
	string getRaca();
	void setRaca(string raca);
	int getIdade();
	void setIdade(int idade);
	


};

#endif // !