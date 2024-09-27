#include "data.h"
#include <string>
using namespace std;

class Pessoa {
public:
    Pessoa(const string& nome, const Data& datan, const string& morada);

    string getNome() const;
    Data getDatan() const;
    string getMorada() const;

    void setNome(const string& novoNome);
    void setDatan(const Data& novaDatan);
    void setMorada(const string& novaMorada);

private:
    string nome;
    Data datan;
    string morada;
};