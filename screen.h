#ifndef SCREEN_H
#define SCREEN_H
#include <iostream>
#include <vector>

using namespace std;

/** @brief A classe Screen serve para desenhar pontos em uma tela virtual
*
* A classe Screen providencia a declaração de uma matriz de desenho, bem como métodos que alteram o caractere do desenho
* e imprimem a matriz do desenho na tela virtual
*/
class Screen{
private:
    int nlin, ncol;
    char brush;
    vector<vector <char> > mat;
public:
    /**
     * @brief Construtor padrão da classe Screen
     */
    Screen();
    /**
     * @brief Construtor com argumentos da classe Screen
     * @param nlin representa o número de linhas da matriz de desenho
     * @param ncol representa o número de colunas da matriz de desenho
     */
    Screen(int nlin, int ncol);
    /**
     * @brief Desenha o caractere armazenado brush em uma posição da matriz de desenho
     * @param x coordenada x do ponto no qual o caractere será desenhado
     * @param y coordenada y do ponto no qual o caractere será desenhado
     */
    void setPixel(int x, int y);
    /**
     * @brief Atribui à cada posição da matriz de desenho o caractere ' ';
     */
    void clear();
    /**
     * @brief Muda o caractere de desenho
     * @param brush variável que armazena o caractere usado para desenhar na tela virtual
     */
    void setBrush(char brush);
    /**
     * @brief operator <<
     * @param os
     * @param t
     * @return
     */
    friend ostream& operator<<(ostream &os, Screen &t);
};

#endif // SCREEN_H
