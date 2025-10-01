#ifndef MEDICO_H
#define MEDICO_H

#include <Pessoa.h>


class Medico : public Pessoa
{
    public:
        Medico(string n, string e, unsigned short int i, string cr, string esp) :
            Pessoa(n, e, i), crm(cr), especialidade(esp) {};

        string Getcrm() { return crm; }
        void Setcrm(string val) { crm = val; }
        string Getespecialidade() { return especialidade; }
        void Setespecialidade(string val) { especialidade = val; }

        void mostra();

    protected:

    private:
        string crm;
        string especialidade;
};

#endif // MEDICO_H
