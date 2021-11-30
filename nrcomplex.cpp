#include "nrcomplex.hpp"

Nr_complex::Nr_complex() {
    real = 0;
    imaginar = 0;
}

Nr_complex::Nr_complex(int preal, int pimaginar) {
    real = preal;
    imaginar = pimaginar;
}

Nr_complex::Nr_complex(const Nr_complex& obj) {
    real = obj.real;
    imaginar = obj.imaginar;
}

Nr_complex& Nr_complex::operator=(const Nr_complex& obj) {
    real= obj.real;
    imaginar = obj.imaginar;
    return *this;
}

Nr_complex::~Nr_complex() {
    real = 0;
    imaginar = 0;
}

double Nr_complex::getModul() const {
    int real2 = real*real;
    int imaginar2 = imaginar * imaginar;
    return (sqrt(real2 + imaginar2));
}

bool Nr_complex::operator<(const Nr_complex& obj) {
    if(this->getModul() <= obj.getModul()) {
        return true;
    } else {
        return false;
    }
}

std::ostream& operator<<(std::ostream& out, const Nr_complex& obj) {
    out << "\nReal: " << obj.real;
    out << "\nImaginar: " << obj.imaginar;
    out << "\nNr complex: " << obj.real << " + " << obj.imaginar << "i" << std::endl;
    return out;
}