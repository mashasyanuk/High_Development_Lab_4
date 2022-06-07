#include "iterator.h"
#include <iostream>
using namespace std;

Iterator::Iterator(const Iterator& it) : m_worker(it.m_worker) {}

bool Iterator::operator==(const Iterator& it) const {
    return m_worker == it.m_worker;
}
bool Iterator::operator!=(const Iterator& it) const {
    return m_worker != it.m_worker;
}
Iterator& Iterator::operator++() {
    m_worker++;
    return *this;
}
Worker& Iterator::operator*() const {
    return *m_worker;
}

