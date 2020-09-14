//
// Created by Ziyang Jiao on 2020-06-27.
//
#include <iostream>
using namespace std;
class point{
private:
    double x, y;
public:
    double getx() const { return x;}
    double gety() const { return y;}
    void setx(double v){ this->x = v;}
    point(){
        this->x = 0;
        this->y = 0;
    }
    point(double x, double y) {
        this->x = x;
        this->y = y;
    }
};
// Make the operator overload a free function
point operator+(point& p1, point& p2){
    point sum = {p1.getx() + p2.getx(), p1.gety() + p2.gety()};
    return sum;
}
ostream& operator<< (ostream& out, const point p){
    out << "(" << p.getx() << "," << p.gety() << ")";
    return out;
}
int main(){
    point a = {3.5, 2.5}, b = {2.5, 4.5}, c;
    cout << "a = " << a << " b = " << b << endl;
    cout << "sum = " << a + b << endl;
    return 0;
}
