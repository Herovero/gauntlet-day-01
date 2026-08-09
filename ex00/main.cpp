#include "Vec2.hpp"
#include <iostream>
using namespace std;

int main() {
    const Vec2 a(3.0f, 4.0f);

    cout << "a = (" << a.x() << ", " << a.y() << "), length " << a.length() << "\n";

    return 0;
}