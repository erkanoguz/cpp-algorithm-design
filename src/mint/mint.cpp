#include "../../lib/mint/mint.hpp"
#include <iostream>

Mint::Mint(int x): mx{x} {

}

std::ostream& operator<<(std::ostream& os, const Mint& o){
    return os << '(' << o.mx << ')';
}

std::istream& operator>>(std::istream& is, Mint& o){
    return is >> o.mx;
}

bool operator<(const Mint& x, const Mint& y){
    return x.mx < y.mx;
}

bool operator>(const Mint& x, const Mint& y){
    return y < x;
}

bool operator<=(const Mint& x, const Mint& y){
    return !(y<x);
}

bool operator>=(const Mint& x, const Mint& y){
    return !(y<x);
}

bool operator==(const Mint& x, const Mint& y){
    return !(y<x);
}

bool operator!=(const Mint& x, const Mint& y){
    return !(y<x);
}
