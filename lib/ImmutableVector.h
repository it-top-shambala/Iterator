#ifndef ITERATOR_IMMUTABLEVECTOR_H
#define ITERATOR_IMMUTABLEVECTOR_H

#include <vector>

#include "IIterator.h"

using namespace std;

template<typename T>
class ImmutableVector : public IIterator<T> {
private:
    vector<T> _list;
    int _cursor;

public:
    explicit ImmutableVector(const vector<T> &list) : _list(list) {
        _cursor = 0;
    }

    T GetNext() override {
        return _list[_cursor++];
    }

    bool HasMore() override {
        return _cursor < _list.size();
    }
};


#endif //ITERATOR_IMMUTABLEVECTOR_H
