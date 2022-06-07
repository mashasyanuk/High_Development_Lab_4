#pragma once
#include "Models/Post/Worker.h"

class Iterator {
    friend class MyVector;

public:
    Iterator(const Iterator&);
    bool operator==(const Iterator&) const;
    bool operator!=(const Iterator&) const;
    Iterator& operator++();
    Worker& operator*() const;

private:
    Worker* m_worker;
    Iterator(Worker* p) : m_worker(p) {};
};
