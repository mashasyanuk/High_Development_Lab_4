#pragma once
#include "iterator.h"
#include "Models/Post/Worker.h"

class MyVector {
public:
    typedef Iterator iterator;
    typedef Iterator const_iterator;
    MyVector();
    iterator begin();
    iterator end();
    const_iterator begin() const;
    const_iterator end() const;
    void AddMemory();
    void PushBack(const Worker&);
    void Remove(size_t);
    size_t Size();
    friend ostream& operator<<(ostream&, const MyVector&);
    Worker& operator[](int i);

private:
    Worker* m_array{};
    size_t m_size{};
    size_t m_capacity{};
};
