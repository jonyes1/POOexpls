
class Data {
public:
    Data(int dia, int mes, int ano);

    int getDia() const;
    int getMes() const;
    int getAno() const;

    void setDia(int novoDia);
    void setMes(int novoMes);
    void setAno(int novoAno);

private:
    int dia;
    int mes;
    int ano;
};


