#include "pessoa.h"
using namespace std;

Pessoa::Pessoa(const string& nome, const Data& datan, const string& morada)
        : nome(nome), datan(datan), morada(morada) {
    // Implementação do construtor
}

std::string Pessoa::getNome() const {
    return nome;
}

Data Pessoa::getDatan() const {
    return datan;
}

std::string Pessoa::getMorada() const {
    return morada;
}
