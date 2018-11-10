#include "Box2D.h"
#include <cstddef>


std::size_t Box2D::getNl() const{
    return this->m_nl;
    Point2D p = Point2D(1, 1);
}

std::size_t Box2D::getNc() const{
    return this->m_nc;
}

Point2D Box2D::getPoint(std::size_t x, std::size_t y){
    Point2D lol = Point2D(1, 1);
    return lol;
}

unsigned int Box2D::npoints(){
    return this->m_nl*this->m_nc;
}

