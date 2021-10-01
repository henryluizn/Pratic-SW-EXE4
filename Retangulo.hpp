#ifndef RETANGULO_HPP
#define RETANGULO_HPP
#define SEM_COR "SEM_COR"
#define SEM_NOME "SEM_NOME"
#include <string>

using namespace std;
class Retangulo
{
    private:
    // ATRIBUTOS
        float base;
        float altura;
        float area;
        float perimetro;
        string nomeRetangulo; 
        string cor;
    // METODOS
        // FUNCOES MEMBROS PARA CALCULOS
        float calculaArea();
        float calculaPerimetro();
    
    public:
    // CONSTRUTORES
        Retangulo();
        // CONSTRUTOR COM PARÂMETROS DEFAULT
        Retangulo(float area, string novoNome = SEM_NOME, string novaCor = SEM_COR);
    // METODOS
        // GETTERS AND SETTERS
        void setAltura(string novaAltura);
        void setBase(string novaBase);
        void setNomeRetangulo(string novoNome);
        void setArea(Retangulo ret);
        void setPerimetro(Retangulo ret);
        void setCor(string novaCor);
        
        float getAltura();
        float getBase();
        string getNomeRetangulo();
        float getArea();
        float getPerimetro();
        string getCor();
};
#endif