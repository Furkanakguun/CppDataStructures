#include <iostream>
#include "datastructures/Array.hpp"

int main()
{
    DataStructures::Array myArray(5);
    
    myArray.set(0, 10);
    myArray.set(1, 20);
    myArray.set(2, 30);
    myArray.set(3, 40);
    myArray.set(4, 50);
    
    myArray.print();
    
    try {
        int value = myArray.get(10);
    }
    catch (const std::out_of_range& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    
    myArray.removeAt(2);
    myArray.print();
    
    {
        DataStructures::Array tempArray(3);
        tempArray.set(0, 100);
        tempArray.print();
    }  // C++: destructor called here automatically (Java: GC handles later)
    

    
    return 0;
}
