#ifndef CLASSEA_H
#define CLASSEA_H

#include <iostream>

class ClasseA
{
private:
    int A1;
    float A2;

public:
    int getA1()
    {
        return A1;
    }
    void setA1(int a1)
    {
        A1 = a1;
    }

    float getA2()
    {
        return A2;
    }
    void setA2(float a2)
    {
        A2 = a2;
    }

    void MA1()
    {
        std::cout << "MA1" << std::endl;
    }

    void MA2()
    {
        std::cout << "MA2" << std::endl;
    }

    void MA3()
    {
        std::cout << "Alteração a classe A partir do clone" << std::endl;
    }


    int getSoma(int a, int b)
{
    return a + b;
}
};

#endif