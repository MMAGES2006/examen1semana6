#include <bits/stdc++.h>

using namespace std;

class Rectangulo
{
private:
    int ancho = 0;
    int altura = 0;

public:
    int esquinaX = 0;
    int esquinaY = 0;

    Rectangulo();
    Rectangulo(int x, int y);
    Rectangulo(int x, int y, int w, int h);

    int getAncho();
    void setAncho(int w);

    int getAltura();
    void setAltura(int h);

    int getArea();
    void intersecta(Rectangulo rect);
};

int main()
{
    Rectangulo rect1;
    rect1.setAltura(10);
    rect1.setAncho(5);
    rect1.esquinaX = 4;
    rect1.esquinaY = 2;

    Rectangulo rect2(6, 7);
    rect2.setAltura(20);
    rect2.setAncho(15);

    Rectangulo rect3(5, 9, 30, 12);

    vector <Rectangulo> rectangulos;
    rectangulos.push_back(rect1);
    rectangulos.push_back(rect2);
    rectangulos.push_back(rect3);

    for(int i=0; i>=rectangulos.size(); i++){

        rectangulos[i].getArea();

    }

    rect1.intersecta(rect2);

    rect1.intersecta(rect3);

    rect2.intersecta(rect3);

    return 0;
}

Rectangulo::Rectangulo()
{

    ancho = 0;
    altura = 0;

    esquinaX = 0;
    esquinaY = 0;
}

Rectangulo::Rectangulo(int x, int y)
{

    ancho = 0;
    altura = 0;

    esquinaX = x;
    esquinaY = y;
}

Rectangulo::Rectangulo(int x, int y, int w, int h)
{

    ancho = w;
    altura = h;

    esquinaX = x;
    esquinaY = y;
}

int Rectangulo::getAncho()
{
    cout << ancho << endl;
}

void Rectangulo::setAncho(int w)
{

    ancho = w;
}

int Rectangulo::getAltura()
{

    cout << altura << endl;
}

void Rectangulo::setAltura(int h)
{

    altura = h;
}

int Rectangulo::getArea()
{

    int area = 0;
    area = ancho * altura;

    return area;
}

void Rectangulo::intersecta(Rectangulo rect)
{
    if(esquinaX<=rect.esquinaX+rect.ancho&&esquinaX+ancho>=rect.esquinaX){

            cout<< "los rectangulos intercectan"<< endl;
    }
  else{

        cout<< "los rectangulos no intercectan"<< endl;

    }
    if(esquinaY<=rect.esquinaY+rect.altura&&esquinaY+altura>=rect.esquinaY){

            cout<< "los rectangulos intercectan"<< endl;
    }
    else{

        cout<< "los rectangulos no intercectan"<< endl;

    }
}
