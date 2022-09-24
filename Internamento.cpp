#include "Internamento.h"

using namespace std;

Internamento::Internamento()
{

}

Internamento::Datam Internamento::getDatam()
{
	return datam;

}

void Internamento::setDatam(Datam datam)
{
	this->datam = datam;
}

Internamento::Horas Internamento::getHoras()
{
	return horas;
}

void Internamento::setHoras(Horas horas)
{
	this->horas = horas;
}

string Internamento::getRazao()
{
	return razao;
}
void Internamento::setRazao(string razao)
{
	this->razao = razao;
}

string Internamento::getMedicoResponsavel()
{
	return medicoResponsavel;
}
void Internamento::setMedicoResponsavel(string medicoResponsavel)
{
	this->medicoResponsavel = medicoResponsavel;
}

string Internamento::getNomePaciente()
{
	return nomePaciente;
}
void Internamento::setNomePaciente()
{
	this->nomePaciente = nomePaciente;
}