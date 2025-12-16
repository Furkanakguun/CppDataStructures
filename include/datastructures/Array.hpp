#pragma once
#include <iostream>
#include <stdexcept>

namespace DataStructures
{
    class Array
    {
    private:
        int *data;  // C++: raw pointer (Java: reference, but you manage memory)
        int size;

    public:
        Array(int n);      // Constructor (Java: same concept)
        ~Array();          // Destructor (Java: finalize() - rarely used, GC handles it)
        Array(const Array& other);
        Array& operator=(const Array& other);
        
        int get(int index) const;  // const = method doesn't modify object (Java: final)
        void set(int index, int value);
        int length() const;
        void print() const;
        void removeAt(int index);
    };
}