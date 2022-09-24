
#ifndef INTERNAMENTO_H
#define INTERNAMENTO_H
#include<string>

using namespace std;

class Internamento
{
private:
	typedef struct
	{
		int dia;
		int mes;
		int ano;
	} Datam;

	typedef struct 
	{
		int horas;
		int minutos;
	}Horas;
	
	Datam datam;
	Horas horas;
	string razao;
	string medicoResponsavel;
	string nomePaciente;

public:
	Internamento();
	Datam getDatam();
	void setDatam(Datam datam);
	Horas getHoras();
	void setHoras(Horas horas);
	string getRazao();
	void setRazao(string razao);
	string getMedicoResponsavel();
	void setMedicoResponsavel(string medicoResponsavel);
	string getNomePaciente();
	void setNomePaciente();




};

#endif // !