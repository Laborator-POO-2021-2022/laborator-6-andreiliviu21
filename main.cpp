#include "Vector.hpp"



int main() {
    std::cout << "Int:";
    int test[2] = {1, 2};
    Vector<int> a(2, test);
    a.sort();
    a.afisare();
    std::cout << "\n----------------------------" << std::endl;

    std::cout << "\nDouble:";
    double test1[2] = {3.14, 2};
    Vector<double> b(2, test1);
    b.sort();
    b.afisare();
    std::cout << "\n----------------------------" << std::endl;

    std::cout << "\nFractie:";
    Fractie* fractie = new Fractie[2];
    fractie[0] = Fractie(4, 2);
    fractie[1] = Fractie(3, 2);
    Vector<Fractie> f(2, fractie);
    f.sort();
    f.afisare();
    std::cout << "\n----------------------------" << std::endl;


    std::cout << "Nr_comp:";
    Nr_complex* vector = new Nr_complex[2];
    vector[0] = Nr_complex(2, 2);
    vector[1] = Nr_complex(1, 1);
    Vector<Nr_complex> e(2, vector);
    e.sort();
    e.afisare();
    std::cout << "\n----------------------------" << std::endl;



    return 0;
}