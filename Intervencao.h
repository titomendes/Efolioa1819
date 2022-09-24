#ifndef INTERVENCAO_H
#define INTERVENCAO_H
#include <string>
#include "Animal.h"

using namespace std;
typedef struct
{
	int dia;
	int mes;
	int ano;

}Data;

class Intervencao
{
private:


	Data data;
	string razao;
	string medico;
	string paciente;

public:
	Intervencao();
	~Intervencao();
	string getRazao();
	void setRazao(string razao);
	string getMedico();
	void setMedico(string medico);
	string getPaciente();
	void setPaciente(string nomePaciente);
	Data getData();
	void setData(Data data);
	


};

#endif // !