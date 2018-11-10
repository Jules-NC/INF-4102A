#include <vector>
#include "Point2D.h"

class Neighb2DIterator{
private:
    unsigned int m_i;  // Indexe
    std::vector<Point2D> m_delta;
    Point2D m_p;  // Centré en pé

public:
    Neighb2DIterator()
        : m_i(0), m_delta(4), m_p()
    {
        m_delta.push_back(Point2D(0, -1));
        m_delta.push_back(Point2D(-1, 0));
        m_delta.push_back(Point2D(1, 0));
        m_delta.push_back(Point2D(0, 1));

    }
    ~Neighb2DIterator();

    void center_at(const Point2D& p);

    void next();
    void start();
    bool is_valid() const;
};
