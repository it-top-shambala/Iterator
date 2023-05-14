#include <iostream>
#include <string>

#include "./lib/ImmutableVector.h"
#include "./lib/Stack.h"

using namespace std;

template<typename T>
void ForEach(IIterator<T>* iterator, void (*func) (T)) {
    while (iterator->HasMore()) {
        func(iterator->GetNext());
    }
}

template<typename T>
void Print(T t) {
    cout << t << endl;
}

int main() {
    vector<int> array {1, 2, 3, 4};
    auto* pImmutableVector = new ImmutableVector<int>(array);
    ForEach(pImmutableVector, Print);

    vector<string> strings {"str", "1", "string"};
    auto* pVector = new ImmutableVector<string>(strings);
    ForEach(pVector, Print);

    auto* stack = new Stack<int>(array);
    ForEach(stack, Print);
    cout << stack->HasMore() << endl;

    return 0;
}
