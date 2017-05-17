#ifndef CIRCULO_H
#define CIRCULO_H
#include <figurageometrica.h>
#include <ponto.h>

/** @brief A classe Circulo serve para fazer o tratamento de círculos
*
* Esta classe é derivada da classe abstrata FiguraGeometrica e serve para armazenar círculos e desenhá-los dentro da tela virtual
*/
class Circulo:public FiguraGeometrica
{
private:
    Ponto centro;
    int raio;
    bool preenchido;
public:
    /**
     * @brief Construtor com argumentos da classe Circulo
     * @param x coordenada x do ponto central do círculo a ser declarado
     * @param y coordenada y do ponto central do círculo a ser declarado
     * @param r raio do círculo a ser declarado
     * @param p variável que indica se o círculo deve ser preenchido ou não
     */
    Circulo(int x, int y, int r, bool p);
    /**
     * @brief Desenha um círculo na tela virtual
     * @param t referência à um objeto da classe screen que representa a tela virtual do desenho
     */
    void draw(Screen &t);
};

#endif // CIRCULO_H

