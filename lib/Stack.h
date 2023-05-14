#ifndef ITERATOR_STACK_H
#define ITERATOR_STACK_H

#include <vector>

#include "IIterator.h"

using namespace std;

template<typename T>
class Stack : public IIterator<T> {
private:
    vector<T> _stack;

public:
    explicit Stack(const vector<T> &stack) : _stack(stack) {}

    T GetNext() override {
        auto temp = _stack.back();
        _stack.pop_back();
        return temp;
    }

    bool HasMore() override {
        return !_stack.empty();
    }
};


#endif //ITERATOR_STACK_H
