#include <iostream>
#include "datastructures/Array.hpp"

int main()
{
    DataStructures::Array arr(5);
    
    arr.set(0, 10);
    arr.set(1, 20);
    arr.set(2, 30);
    arr.set(3, 40);
    arr.set(4, 50);
    
    arr.print();
    
    try {
        arr.get(10);
    }
    catch (const std::out_of_range& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    
    arr.removeAt(2);
    arr.print();
    
    DataStructures::Array arr2 = arr;
    arr2.print();
    
    return 0;
}
