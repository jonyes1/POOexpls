#include "funcionario.h"
#include <iostream>



Funcionario::Funcionario(int num_func, const std::string& setor, const std::string& nome, const Data& datan, const std::string& morada)
        : Pessoa(nome, datan, morada), num_func(num_func), setor(setor) {
    // Construtor com parâmetros
}

int Funcionario::getNumFunc() const {
    return num_func;
}

std::string Funcionario::getSetor() const {
    return setor;
}

void Funcionario::setNumFunc(int novoNumFunc) {
    num_func = novoNumFunc;
}

void Funcionario::setSetor(const std::string& novoSetor) {
    setor = novoSetor;
}

void Funcionario::atualizarMorada(const string& novaMorada) {
    setMorada(novaMorada);
}

void Funcionario::atualizarSetor(const string& novoSetor) {
    setSetor(novoSetor);
}

void Funcionario::atualizarDataNascimento(int novoDia) {
    setDatan(Data(novoDia, getDatan().getMes(), getDatan().getAno()));
}
