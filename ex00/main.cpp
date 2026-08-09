#include "Vec2.hpp"
#include <iostream>
using namespace std;

int main() {
    const Vec2 a(3.0f, 4.0f); // Non mutable
    Vec2 b(1.0f, 2.0f); // Mutable

    cout << "a = (" << a.x() << ", " << a.y() << "), length " << a.length() << "\n";
    cout << "b = (" << b.x() << ", " << b.y() << "), length " << b.length() << "\n";

    cout << "a + b = (" << a.plus(b).x() << ", " << a.plus(b).y() << ")" << "\n";

    b.setX(10.0f);
    cout << "b now (" << b.x() << ", " << b.y() << ")";

    return 0;
}