#ifndef RETANGULO_H
#define RETANGULO_H
#include <figurageometrica.h>
#include <ponto.h>

/** @brief A classe Retangulo serve para fazer o tratamento de retângulos
*
* Esta classe é derivada da classe abstrata FiguraGeometrica e serve para armazenar retângulos e desenhá-los dentro da tela virtual
*/
class Retangulo:public FiguraGeometrica
{
private:
    Ponto p0;
    int largura, altura;
public:
    /**
     * @brief Construtor com argumentos da classe Retangulo
     * @param x coordenada x do ponto superior esquerdo do retângulo a ser declarado
     * @param y coordenada y do ponto superior esquerdo do retângulo a ser declarado
     * @param largura largura do retângulo a ser declarado
     * @param altura altura do retângulo a ser declarado
     */
    Retangulo(int x, int y, int largura, int altura);
    /**
     * @brief Desenha um retângulo na tela virtual
     * @param t referência à um objeto da classe screen que representa a tela virtual do desenho
     */
    void draw(Screen &t);
};

#endif // RETANGULO_H
