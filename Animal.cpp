#include <iostream>
#include "Animal.h"

using namespace std;

Animal::Animal(string nome, string dono, int telefone, string morada, string raca, int idade,Especie tipo)
{
	cout << "Cao ou gato";
	
}
 Animal::~Animal()
{
	
}

 Animal::Especie Animal::getTipo()
 {
	 return tipo;
 }

 void Animal::setTipo(Especie tipo)
 {
	 this->tipo = tipo;
 }

string Animal::getNome()
{
	return nome;
}

void Animal::setNome(string nome)
{
	this->nome = nome;
}

string Animal::getDono()
{
	return dono;
}

void Animal::setDono(string dono)
{
	this->dono = dono;
}

int Animal::getTelefone()
{
	return telefone;
}

void Animal::setTelefone(int telefone)
{
	this->telefone = telefone;
}

string Animal::getMorada()
{
	return morada;
}

void Animal::setMorada(string morada)
{
	this->morada = morada;
}

string Animal::getRaca()
{
	return raca;
}

void Animal::setRaca(string raca)
{
	this->raca = raca;
}
int Animal::getIdade()
{
	return idade;
}

void Animal::setIdade(int idade)
{
	this->idade = idade;
}

