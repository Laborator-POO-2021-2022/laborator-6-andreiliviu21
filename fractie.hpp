#ifndef FRACTIE_HPP
#define FRACTIE_HPP

#include<iostream>


class Fractie{

private:
	int numarator;
	int numitor;

public:
	Fractie();
	Fractie(int, int);
	Fractie(const Fractie&);
	~Fractie();
	Fractie& operator=(const Fractie&);
	double getValoare() const;
	friend std::ostream& operator<<(std::ostream&, const Fractie&);
	bool operator<(const Fractie&);

};

#endif