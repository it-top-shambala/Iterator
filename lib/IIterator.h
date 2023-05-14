#ifndef ITERATOR_IITERATOR_H
#define ITERATOR_IITERATOR_H

template<typename T>
class IIterator {
public:
    virtual T GetNext() = 0;
    virtual bool HasMore() = 0;
};


#endif //ITERATOR_IITERATOR_H
