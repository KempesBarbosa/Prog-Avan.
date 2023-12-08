/// by Gabriel Barbosa

#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
#include <limits>
#include <stdlib.h>
#include <stdint.h>
#include "Poly.h"
#include <cstring>

using namespace std;

/// Cria o polinomio nulo e no ultimo elemento 1.0 se D>1
void Poly::criar(unsigned Grau){
    D = Grau + 1;
    a = new double[D];

    for (unsigned i=0; i < D; i++){
        a[i] = 0.0;
    }
    if (D > 1){
        a[Grau] = 1.0;
    }
}

/// Criar um polinomio para copiar
void Poly::copia (const Poly& P){
    criar(P.getGrau());

    for (unsigned i = 0; i < D; i++){
        a[i] = P.a[i];
    }
}

/// if P.a[Grau] ser 0; G-1
void Poly::newP(){
    Poly prov;

    do{
        prov.recriar(getGrau() - 1);

        for (int i = 0; i < prov.D; i++){
            prov.a[i] = a[i];
        }

        delete[] a;
        D = prov.getGrau() + 1;
        a = prov.a;
    }
    while (prov[prov.getGrau()] == 0);
}

/// Recomeça o polinomio pelo G
void Poly::recriar(unsigned Grau){
    if (a != nullptr){
        delete[] a;
    }

    criar(Grau);
}

/// Descobrir se vão para a mesma area
void Poly::operator=(const Poly& P2){
    if (this != &P2){
        if (D == P2.D){
            for (unsigned i = 0; i < D; i++) {
                a[i] = P2[i];
            }
        }
        else {
            if (a != nullptr) {
                delete[] a;
            }
            copia(P2);
        }
    }
}

/// Entrada dos dados
istream &operator >> (istream& In, Poly& P){
    ///caso n tenha grau
    if (P.empty()){
        cerr << "Polinomio sem grau";
        return In;
    }

    for (int i= P.getGrau(); i >= 0; i--){
        cout << "x^" << i;
        In >> P.a[i];

        if (i == P.getGrau() && P[i] == 0){
            do {
                cerr << "Digite um valor diferente de 0: " << endl;
                cout << "x^" << i;
                In >> P.a[i];
            }
            while (P[i] == 0);
        }
    }

    return In;
}

/// Saída dos dados
ostream &operator << (ostream& Out, const Poly& P){
    /// if G < 0
    if (P.empty()){
        return Out;
    }

    for (int i = P.getGrau(); i >= 0; i--){
        if (P.getCoef(i) == 0.0){
            if (i == 0 && P.getGrau() == 0){
                Out << P[i];
            }
        }
        else {
            if (P.getCoef(i) < 0.0){
                Out << "-";
            }
            else {
                if ( i != P.getGrau()){
                    Out << "+";
                }
            }
            if (abs(P.getCoef(i)) != 1.0 || i == 0){
                Out << abs(P.getCoef(i));
            }
            if ( i != 0){
                if ( abs(P.getCoef(i)) != 1.0){
                    Out << "*";
                }
                Out << "x";
                if (i > 1){
                    Out << "^" << i;
                }
            }
        }
    }

    return Out;
}

/// Soma Polinomios
Poly Poly::operator+(const Poly& P2)const {
    Poly prov;

    if (empty()){
        return P2;
    }
    if (P2.empty()){
        return *this;
    }
    prov.recriar(max(getGrau(), P2.getGrau()));

    for (unsigned i = 0; i <= prov.getGrau(); i++){
        prov.a[i] = getCoef(i) + P2.getCoef(i);
    }
    if (prov[prov.getGrau()] == 0){
        prov.newP();
    }

    return prov;
}

/// Subtração Polinimios
Poly Poly::operator-(const Poly& P2)const {
    Poly prov;

    if (empty()){
        return -P2;
    }
    if (P2.empty()){
        return *this;
    }
    prov.recriar(max(getGrau(), P2.getGrau()));

    for (unsigned i = 0; i <= prov.getGrau(); i++){
        prov.a[i] = getCoef(i) - P2.getCoef(i);
    }
    if (prov[prov.getGrau()] == 0) {
        prov.newP();
    }

    return prov;
}

/// Unario
Poly Poly::operator-()const {
    Poly prov;

    if (empty()) {
        cerr << "Grau indefinido do polinomio";

        return prov;
    }
    prov.recriar(getGrau());

    for (unsigned i = 0; i < D; i++){
        prov.a[i] = -getCoef(i);
    }

    return prov;
}

/// Multiplicação Polinomios
Poly Poly::operator*(const Poly& P2)const {
    Poly prov;

    if (empty() || P2.empty()) {
        return prov;
    }
    if (isZero() || P2.isZero()) {
        prov.recriar(0);

        return prov;
    }

    unsigned Grau = getGrau() + P2.getGrau();
    prov.recriar(Grau);
    prov.a[Grau] = 0.0;

    for (unsigned i = 0; i < D; i++){
        for (unsigned j = 0; j < P2.D ; j++){
            prov.a[i+j] += getCoef(i) * P2.getCoef(j);
        }
    }

    return prov;
}

/// Retornar o valor do polinômio para um dado valor real de x
double Poly::getValor (double& x)const {
    /// valor de um poly vazio
    if (empty()){
        return 0.0;
    }
    double valor = 0;

    for (unsigned i = 0; i < D; i++) {
        valor += a[i]*pow(x,i);
    }

    return valor;
}

/// Alterar o i-ésimo coeficiente de um polinômio
void Poly::setCoef(const int i, const double& A){
    if (i < D){
        if (i == getGrau() && A == 0){
            if (D != 1){
                cerr << "Valor invalido!" << endl;
            }
            else {
                a[i] = A;
            }
        }
        else {
            a[i] = A;
        }
    }
    else {
        cerr << "Indice invalido!";
    }
}

/// Salvar o polinomio
bool Poly::salvar(const string& file)const {
    fstream file_out;
    file_out.open(file,std::ios_base::out);

    if (!file_out.is_open()){
        cerr << "Erro para abrir o arquivo!";

        return false;
    }
    else {
        file_out << "POLY" << D << endl;

        for (int i = 0; i < D; i++){
            file_out << getCoef(i) << ' ';
        }
    }
    file_out.close();

    return true;
}

/// Ler o polinomoi
bool Poly::ler(const string& file){
    fstream file_in;
    string title;
    double c = 0.0;
    Poly prov;
    file_in.open(file,std::ios_base::in);

    if (!file_in.is_open()){

        return false;
    }
    file_in >> title;

    if(title != "POLY") {

        return false;
    }
    file_in >> prov.D;
    prov.recriar(prov.getGrau());

    for (int i = 0; i < prov.D; i++ ){
        file_in >> prov.a[i];
    }
    if (prov.getCoef(prov.getGrau()) == 0 && prov.getGrau() > 0){

        return false;
    }
    file_in >> c;

    if (c != 0.0){

        return false;
    }
    *this = prov;

    return true;
}




