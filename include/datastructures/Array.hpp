#pragma once
#include <iostream>
#include <stdexcept>

namespace DataStructures
{
    class Array
    {
    private:
        int *data;
        int size;

    public:
        Array(int n);
        ~Array();
        Array(const Array& other);
        Array& operator=(const Array& other);
        
        int get(int index) const;
        void set(int index, int value);
        int length() const;
        void print() const;
        void removeAt(int index);
    };
}