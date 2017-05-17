#ifndef PONTO_H
#define PONTO_H
#include <iostream>

using namespace std;

/** @brief A classe Ponto serve para a declaração e manipulação de pontos no plano cartesiano
* bem como para a obtenção de algumas de suas informações
*
* A classe Ponto providencia a declaração, obtenção e exibição das coordenadas x e y de cada ponto. Também permite
* fazer adição e subtração com outros pontos, deslocá-los e obter a distância entre o ponto e a origem do eixo de
* coordenadas
*/
class Ponto
{
private:
    int x;
    int y;
public:
    /** @brief Construtor padrão da classe Ponto
    */
    Ponto();
    /** @brief Atribui valores à coordenada x do ponto
    *   @param x1 valor que será atribuído à coordenada x do ponto
    */
    void setX(int x1);
    /** @brief Atribui valores à coordenada y do ponto
    *   @param y1 valor que será atribuído à coordenada y do ponto
    */
    void setY(int y1);
    /** @brief Atribui valores às coordenadas x e y do ponto simultaneamente
    *   @param x1 valor que será atribuído à coordenada x do ponto
    *   @param y1 valor que será atribuído à coordenada y do ponto
    */
    void setXY(int x1, int y1);
    /** @brief Recupera o valor da coordenada x do ponto
    *   @return Coordenada x do ponto
    */
    int getX(void);
    /** @brief Recupera o valor da coordenada y do ponto
    *   @return Coordenada y do ponto
    */
    int getY(void);
    /** @brief Exibe as coordenadas x e y do ponto no formato <i>(x, y)</i>
    */
    friend ostream& operator<<(ostream &os, Ponto &p);
};

#endif // PONTO_H

