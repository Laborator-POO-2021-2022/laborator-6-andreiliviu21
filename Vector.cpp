#include "Vector.hpp"



template<class X>
Vector<X>::Vector() {
    dim = 0;
    buf = NULL;
}

template<class X>
Vector<X>::Vector(int dim, X*buf) {
    this->dim = dim;
    this->buf = new X[dim];
    for (int i = 0; i < dim; i++) {
        this->buf[i] = buf[i];
    }
}

template<class X>
Vector<X>& Vector<X>::operator=(Vector<X>& obj) {
    dim = obj.dim;
    buf = new X[dim];
    for (int i = 0; i < dim; i++) {
        buf[i] = obj.buf[i];
    }
    return *this;
}

template<class X>
Vector<X>::~Vector() {
    delete[] buf;
}

template<class X>
void Vector<X>::afisare() {
    std::cout << "\nDimensiunea: " << dim << std::endl;
    // std::cout << "\nVector: ";
    for (int i = 0; i < dim; i++) {
        std::cout << buf[i] << ' ';
    }
}

template<class X>
void Vector<X>::sort() {
    for(int i = 0; i < dim -1; i++) {
        for(int j = 0; j < dim - i - 1; j++) {
            if (buf[j + 1] < buf[j]) {
                X aux;
                aux = buf[j];
                buf[j] = buf[j+1];
                buf[j+1] = aux;
            }
        }
    }
}

namespace {
	void test() {
		
        int test[2] = {1, 2};
		Vector<int> a(2, test);
        a.sort();
        a.afisare();

        double test1[2] = {3.14, 2};
		Vector<double> b(2, test1);
        b.sort();
        b.afisare();

        Fractie* fractie = new Fractie[2];
        fractie[0] = Fractie(4, 2);
        fractie[1] = Fractie(3, 2);
        Vector<Fractie> f(2, fractie);
        f.sort();
        f.afisare();

        Nr_complex* vector = new Nr_complex[2];
        vector[0] = Nr_complex(4, 5);
        vector[1] = Nr_complex(6, 7);
        Vector<Nr_complex> e(2, vector);
        e.sort();
        e.afisare();
	}
}