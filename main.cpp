#include "funcionario.h"
#include <iostream>

int main() {
    // Criando objetos
    Data dataNascimento1(20, 9, 1987);
    Data dataNascimento2(4, 2, 1990);

    Funcionario funcionario1(25023, "Producao", "Joao Gaio", dataNascimento1, "Rua da direita n 2");
    Funcionario funcionario2(25024, "Producao", "Ana Rola", dataNascimento2, "Rua da esquerda n 3");

    // Exibindo informações antes das atualizações
    std::cout << "----- Antes das Atualizações -----" << std::endl;
    std::cout << "\n----- Funcionario1 -----" << std::endl;
    std::cout << "Morada: " << funcionario1.getMorada() << std::endl;
    std::cout << "Setor: " << funcionario1.getSetor() << std::endl;
    std::cout << "Data de Nascimento: " << funcionario1.getDatan().getDia() << "/" << funcionario1.getDatan().getMes() << "/" << funcionario1.getDatan().getAno() << std::endl;

    std::cout << "\n----- Funcionario2 -----" << std::endl;
    std::cout << "Morada: " << funcionario2.getMorada() << std::endl;
    std::cout << "Setor: " << funcionario2.getSetor() << std::endl;
    std::cout << "Data de Nascimento: " << funcionario2.getDatan().getDia() << "/" << funcionario2.getDatan().getMes() << "/" << funcionario2.getDatan().getAno() << std::endl;



    return 0;
}

