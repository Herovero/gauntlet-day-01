#include "Vec2.hpp"
#include <iostream>
using namespace std;

int main() {
    const Vec2 a(3.0f, 4.0f);
    const Vec2 b(1.0f, 2.0f);

    cout << "a = (" << a.x() << ", " << a.y() << "), length " << a.length() << "\n";
    cout << "b = (" << b.x() << ", " << b.y() << "), length " << b.length() << "\n";

    cout << "a + b = (" << a.plus(b).x() << ", " << a.plus(b).y() << ")";

    return 0;
}