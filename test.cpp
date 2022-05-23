#include <cppcoro/task.hpp>
#include <iostream>
void f()
{
#ifdef MIELLE
    std::cout << "Mielle says hi";
#endif
}
int main() { f(); }
