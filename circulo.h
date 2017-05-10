#ifndef CIRCULO_H
#define CIRCULO_H
#include <figurageometrica.h>
#include <ponto.h>

class Circulo:public FiguraGeometrica
{
private:
    Ponto centro;
    int raio;
    bool preenchido;
public:
    Circulo(int x, int y, int r, bool p);
    void draw(Screen &t);
    void operator()(int x, int y, int r, bool p);
};

#endif // CIRCULO_H
