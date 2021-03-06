#include <iostream>

#include "LeftistHeap.h"

int main() {

    LeftistHeap<int> s;

    srand(time(0));
    for (int i = 0; i < 50; ++i) {
        s.insert(rand() % 100);
    }
    while (!s.empty()) {
        std::cout << s.extract_max();
        std::cout << ", Elements left: " << s.size() << '\n';
    }

    return 0;
}