#include <iostream>
#include <vector>
using namespace std;

template<class T>
class Array1D {
    friend ostream& operator<<(ostream& out, const Array1D<T>& x) {
        for (int i = 0; i < x.size; i++)
            out << x.element[i] << " ";
        return out;
    }
public:
    Array1D(int sz = 0) {
        if (sz < 0) throw out_of_range("BadInitializers");
        size = sz;
        element = new T[sz];
    }

    Array1D(const Array1D<T>& v) {
        size = v.size;
        element = new T[size]; // get space
        for (int i = 0; i < size; i++) // copy elements
            element[i] = v.element[i];
    }

    ~Array1D() {
        delete[] element;
    }

    T& operator[](int i) const {
        if (i < 0 || i >= size) throw out_of_range("OutOfBounds");
        return element[i];
    }

    int Size() {
        return size;
    }

    Array1D<T>& operator=(const Array1D<T>& v) {
        if (this != &v) {
            size = v.size;
            delete[] element;
            element = new T[size];
            for (int i = 0; i < size; i++)
                element[i] = v.element[i];
        }
        return *this;
    }

    Array1D<T> operator+() const {
        Array1D<T> w(size);
        for (int i = 0; i < size; i++)
            w.element[i] = element[i];
        return w;
    }

    Array1D<T> operator+(const Array1D<T>& v) const {
        if (size != v.size) throw invalid_argument("SizeMismatch");
        Array1D<T> w(size);
        for (int i = 0; i < size; i++)
            w.element[i] = element[i] + v.element[i];
        return w;
    }

    Array1D<T> operator-() const {
        Array1D<T> w(size);
        for (int i = 0; i < size; i++)
            w.element[i] = -element[i];
        return w;
    }

    Array1D<T> operator-(const Array1D<T>& v) const {
        if (size != v.size) throw invalid_argument("SizeMismatch");
        Array1D<T> w(size);
        for (int i = 0; i < size; i++)
            w.element[i] = element[i] - v.element[i];
        return w;
    }

    Array1D<T> operator*(const Array1D<T>& v) const {
        if (size != v.size) throw invalid_argument("SizeMismatch");
        Array1D<T> w(size);
        for (int i = 0; i < size; i++)
            w.element[i] = element[i] * v.element[i];
        return w;
    }

    Array1D<T>& operator+=(const T& x) {
        for (int i = 0; i < size; i++)
            element[i] += x;
        return *this;
    }

    Array1D<T>& ReSize(int sz) {
        if (sz < 0) throw out_of_range("BadInitializers");
        delete[] element;
        size = sz;
        element = new T[size];
        return *this;
    }

private:
    int size;
    T* element;
};
