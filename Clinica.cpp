#include "Clinica.h"
#include <iostream>
#include <string>

using namespace std;

Clinica::Clinica()
{
    int opcao;
    do 
    {
        cout << "Bom dia,opcoes: ";
        cout << "\nRegistar animal 1;";
        cout << "\nMarcar consulta 2";
        cout << "\nMarcar operacao 3";
        cout << "\nRegistar internamento 4";
        cout << "\nVer total de consultas e operacoes 5";//por mes
        cout << "\nVer animais registados 6";
        cout << "Sair 0";

        switch (opcao)
        {
        case 1:
            Animal animal = Animal();
        }
            

        cin >> opcao;
    } while (opcao != 0);
   

}

/*    list<Cirurgia> ClinicaArcoCego::getCirurgia() const
    {
        return lCirurgia;
    }*/
list<Animal>Clinica::getAnimal()const
{
    return LAnimal;
}

list<Consulta>Clinica::getConsulta()const
{
    return LConsulta;
}

list<Internamento>Clinica::getInternamento()const
{
    return LInternamento;
}

void Clinica::setAnimal(list<Animal> LAnimal)
{
    this->LAnimal = LAnimal;
}

void Clinica::setConsulta(list<Consulta> LConsulta)
{
    this->LConsulta = LConsulta;
}
void Clinica::setInternamento(list<Internamento> LInternamento)
{
    this->LInternamento = LInternamento;
}
