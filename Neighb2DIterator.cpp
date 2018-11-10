#include "Neighb2DIterator.h"

bool Neighb2DIterator::is_valid() const{
    return (this->m_i < this->m_delta.size());
}

void Neighb2DIterator::next(){
    this->m_i++;
}

void Neighb2DIterator::start(){
    this->m_i = 0;
}
