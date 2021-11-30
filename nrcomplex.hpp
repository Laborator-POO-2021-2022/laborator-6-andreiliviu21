#ifndef NRCOMPLEX_HPP
#define NRCOMPLEX_HPP
#include<cmath>
#include<iostream>



class Nr_complex {
private:
	int real;
	int imaginar;

public:
	Nr_complex();
	Nr_complex(int , int);
	Nr_complex& operator=(const Nr_complex&);
	Nr_complex(const Nr_complex&);
	~Nr_complex();

	friend std::ostream& operator<<(std::ostream&, const Nr_complex&);
	double getModul() const;
	bool operator<(const Nr_complex&);

};

#endif