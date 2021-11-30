#include "fractie.hpp"

Fractie::Fractie() {
    numarator = 0;
    numitor = 0;
}

Fractie::Fractie(int pnumarator, int pnumitor) {
    numarator = pnumarator;
    numitor = pnumitor;
}

Fractie::Fractie(const Fractie& obj) {
    numarator = obj.numarator;
    numitor = obj.numitor;
}

Fractie& Fractie::operator=(const Fractie& obj) {
    numarator= obj.numarator;
    numitor = obj.numitor;
    return *this;
}

Fractie::~Fractie() {
    numarator = 0;
    numitor = 0;
}


double Fractie::getValoare() const {
    if(numitor != 0) {
        return (double)numarator / numitor;
    } else {
        return 0;
    }
    return 0;
}

bool Fractie::operator<(const Fractie& obj) {
    if(this->getValoare() <= obj.getValoare()) {
        return true;
    } else {
        return false;
    }
}

std::ostream& operator<<(std::ostream& out, const Fractie& obj) {
    out << "\nFractia este: " << obj.numarator <<"/"<< obj.numitor << " = " << obj.getValoare();
    out << "\nNumaratorul este: " << obj.numarator;
    out << "\nNumitorul este: " << obj.numitor;
    return out;
}