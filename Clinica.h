#define CLINICA_

#include <list>

#
#include "Animal.h"
#include "Internamento.h"
#include "Intervencao.h"
#include "Operacao.h"
#include "Internamento.h"
#include "Consulta.h"

class Clinica
{
	//lista de operacoes internamentos consultas e animais
private:
	list<Animal> LAnimal;
	list<Animal>::iterator itAnim;
	list<Consulta>LConsulta;
	list<Consulta>::iterator itCons;
	list<Internamento>LInternamento;
	list<Internamento>::iterator itIn;


public:
	Clinica();
	list<Animal> getAnimal()const;
	list<Consulta> getConsulta()const;
	list<Internamento> getInternamento()const;
	void setAnimal(list<Animal> LAnimal);
	void setConsulta(list<Consulta> LConsulta);
	void setInternamento(list<Internamento> LInternamento);






};




