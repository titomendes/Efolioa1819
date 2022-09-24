#include "Intervencao.h"

Intervencao::Intervencao()
{

}

Intervencao::~Intervencao()
{

}

string Intervencao::getRazao()
{
	return razao;
}
void Intervencao::setRazao(string razao)
{
	this->razao = razao;
}

string Intervencao::getMedico()
{
	return medico;
}

void Intervencao::setMedico(string medico)
{
	this->medico = medico;
}

string Intervencao::getPaciente()
{
	return paciente;
}
void Intervencao::setPaciente(string paciente)
{
	this->paciente = paciente;
	
}

Data Intervencao::getData()
{
	return data;
}

void Intervencao::setData(Data data)
{
	this->data = data;
}