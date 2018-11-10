#include <cstddef>
#include "Point2D.h"

class Box2D{
private:
    std::size_t m_nl;
    std::size_t m_nc;
public:
    Box2D() = default;
    Box2D(std::size_t nl, std::size_t nc);
    ~Box2D();

    Box2D& operator=(const Box2D& rhs) = default;

    std::size_t getNl() const;
    std::size_t getNc() const;

    Point2D getPoint(std::size_t x, std::size_t y);

    unsigned int npoints();
};
