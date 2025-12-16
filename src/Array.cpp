#include "datastructures/Array.hpp"

namespace DataStructures
{
    Array::Array(int n)
    {
        if (n < 0)
        {
            throw std::invalid_argument("Array size cannot be negative");
        }
        size = n;
        data = new int[size]; // C++: new allocates heap memory (Java: new also, but GC manages)
        for (int i = 0; i < size; i++)
        {
            data[i] = 0;
        }
    }

    Array::~Array()
    {
        delete[] data; // C++: must manually delete[] arrays (Java: GC handles automatically)
        data = nullptr;
    }

    Array::Array(const Array &other)
    {
        size = other.size;
        data = new int[size];
        for (int i = 0; i < size; i++)
        {
            data[i] = other.data[i];
        }
    }

    Array &Array::operator=(const Array &other)
    {
        if (this == &other)
        {
            return *this;
        }

        delete[] data;

        size = other.size;
        data = new int[size];

        for (int i = 0; i < size; i++)
        {
            data[i] = other.data[i];
        }

        return *this;
    }

    int Array::get(int index) const
    {
        if (index < 0 || index >= size)
        {
            throw std::out_of_range("Index out of range");
        }
        return data[index];
    }

    void Array::set(int index, int value)
    {
        if (index < 0 || index >= size)
        {
            throw std::out_of_range("Index out of range");
        }
        data[index] = value;
    }

    int Array::length() const
    {
        return size;
    }

    void Array::print() const
    {
        std::cout << "[";
        for (int i = 0; i < size; i++)
        {
            std::cout << data[i];
            if (i < size - 1)
            {
                std::cout << ", ";
            }
        }
        std::cout << "]" << std::endl;
    }

    void Array::removeAt(int index)
    {
        if (index < 0 || index >= size)
        {
            throw std::out_of_range("Index out of range");
        }
        for (int i = index; i < size - 1; i++)
        {
            data[i] = data[i + 1];
        }
        data[size - 1] = 0;
    }
}
