#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>

class Cliente {
    private:
        string NOME;
        string endereco;
        string CIDADE;
        string UF;
        string cep;
        string telefone;

    public:    
        void print();
};

#endif