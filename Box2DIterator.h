#include "Box2D.h"
#include <cstddef>

class Box2DIterator{
private:
    std::size_t m_nl;
    std::size_t m_nc;
    Box2D m_box;

public:
    Box2DIterator();
    void start();
    void next();
};
