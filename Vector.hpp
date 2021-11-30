#ifndef VECTOR_HPP
#define VECTOR_HPP
#include "nrcomplex.hpp"
#include "fractie.hpp"
#include <iostream>

template <class X>
class Vector {
    int dim;
    X *buf;
public:
    Vector();
	Vector(int, X*);
    Vector& operator=(Vector&);
    ~Vector();
	void afisare();
    void sort();

};



#endif