#include "pessoa.h"

class Funcionario : public Pessoa {
public:

    Funcionario(int num_func, const string& setor, const string& nome, const Data& datan, const string& morada);

    int getNumFunc() const;
    string getSetor() const;

    void setNumFunc(int novoNumFunc);
    void setSetor(const string& novoSetor);

    void atualizarMorada(const string& novaMorada);
    void atualizarSetor(const string& novoSetor);
    void atualizarDataNascimento(int novoDia);


    friend std::istream& operator>>(std::istream& input, Funcionario& funcionario);

private:
    int num_func;
    string setor;

};
