#ifndef MINT_HPP
#define MINT_HPP

#include <iosfwd>

class Mint{
public:
    Mint() = default;
    explicit Mint(int);

    friend std::ostream& operator<<(std::ostream&, const Mint&);
    friend std::istream& operator>>(std::istream&, Mint&);

    friend bool operator< (const Mint&, const Mint&);
    friend bool operator==(const Mint&, const Mint&);  

    Mint operator+()const;
    Mint operator-()const;

    Mint& operator+=(const Mint&);
    Mint& operator-=(const Mint&);
    Mint& operator*=(const Mint&);
    Mint& operator/=(const Mint&);

    Mint& operator++();
    Mint  operator++(int);

    Mint& operator--();
    Mint& operator--(int);


private:
    int mx = 0;
};

bool operator> (const Mint&, const Mint&);
bool operator<=(const Mint&, const Mint&);
bool operator>=(const Mint&, const Mint&);
bool operator==(const Mint&, const Mint&);
bool operator!=(const Mint&, const Mint&);

Mint operator+(const Mint&, const Mint&);
Mint operator-(const Mint&, const Mint&);
Mint operator*(const Mint&, const Mint&);
Mint operator/(const Mint&, const Mint&);
#endif
