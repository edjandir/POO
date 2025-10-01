#ifndef CONSULTA_H
#define CONSULTA_H

#include <Pessoa.h>
#include <Medico.h>

#include <iostream>

class Consulta
{
    public:
        Consulta(Pessoa* p, Medico* m, string d) :
            paciente(p), medico(m), data(d){}

        Pessoa* Getpaciente() { return paciente; }
        void Setpaciente(Pessoa* val) { paciente = val; }
        Medico* Getmedico() { return medico; }
        void Setmedico(Medico* val) { medico = val; }
        string Getdata() { return data; }
        void Setdata(string val) { data = val; }

        void mostra();

    protected:

    private:
        Pessoa* paciente;
        Medico* medico;
        string data;
};

#endif // CONSULTA_H
