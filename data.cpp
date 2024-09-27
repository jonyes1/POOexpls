#include "data.h"

Data::Data(int dia, int mes, int ano)
        : dia(dia), mes(mes), ano(ano) {
    // Construtor com parâmetros
}

int Data::getDia() const {
    return dia;
}

int Data::getMes() const {
    return mes;
}

int Data::getAno() const {
    return ano;
}

void Data::setDia(int novoDia) {
    dia = novoDia;
}

void Data::setMes(int novoMes) {
    mes = novoMes;
}

void Data::setAno(int novoAno) {
    ano = novoAno;
}