#include "Timer.hpp"
#include <iostream>
using namespace std;

int main(){
    Timer t(0);
    t.advance(16);
    cout << t.elapsedMs();
}