/// by Gabriel Barbosa
#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
#include <limits>
#include <stdlib.h>
#include <stdint.h>

using namespace std;

class Poly {
private:
    unsigned D; /// tamanho do vetor
    double* a; /// ponteiro
    void copia(const Poly& P);
    void criar(unsigned Grau);
    void newP();

public:
    /// Construtores
    inline Poly() : D(0.0), a(nullptr){} /// def
    inline Poly(unsigned Grau){
        criar(Grau);
    } /// esp
    inline Poly(const Poly& P){
        copia(P);
    } /// copia
    inline ~Poly(){
        delete[] a,D = 0;
    } /// destrutor

    /// Metodos de consulta
    inline int getGrau() const{

        return int(D)-1;
    }/// Grau
    inline double getCoef(const unsigned& i)const {
        if ( i >= D) {

            return 0.0;
        }
        else {
            return a[i];
        }
    } /// coeficiente
    inline double operator[] (const unsigned& i)const {

        return getCoef(i);
    } /// sobrecarga de operador
    inline bool empty() const {
        if (D == 0) {

            return true;
        }
        else {
            return false;
        }
    } /// função p poly vazio
    inline bool isZero()const {
        if (D == 1 && getCoef(0) == 0.0) {

            return true;
        }
        else {
            return false;
        }
    } /// unico termo nulo
    inline double operator()(double& x)const {

        return getValor(x);
    } /// valor do poly em x
    double getValor(double& x)const;
    void setCoef(const int i, const double& A); /// alterar o coeficiente
    void recriar(unsigned Grau); /// reiniciar e criar um novo grau
    bool salvar(const string& file)const;
    bool ler(const string& file);

    /// Dados
    friend istream &operator >> (istream& In, Poly& P);
    friend ostream &operator << (ostream& Out, const Poly& P);

    /// sobre carga de operadores
    Poly operator+(const Poly& P2)const;
    Poly operator-(const Poly& P2)const;
    Poly operator-()const;
    Poly operator*(const Poly& P2)const;
    void operator=(const Poly& P2);
};








