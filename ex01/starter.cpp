#include <iostream>

class Timer {
public:
    Timer(int startMs) : m_elapsedMs(startMs) {}
    void advance(int deltaMs){ m_elapsedMs += deltaMs; }
    int elapsedMs() const{ return m_elapsedMs; }
private:
    int m_elapsedMs;
};
int main(){
    Timer t(0);
    t.advance(16);
    std::cout << t.elapsedMs() << '\n';
}