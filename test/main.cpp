#include <iostream>
#include "vulpes.hpp"

int main()
{
    vulpes::PrimitiveType Int("int");
    std::cout << Int.is_int();
}
