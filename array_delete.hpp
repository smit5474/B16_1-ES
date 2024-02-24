#ifndef __array_delete__
#define __array_delete__

#include <cstddef>
#include <utility>
#include <vector>

template <typename T>
void array_delete(std::vector<T> &A, std::size_t index)
{
    if (size_t index >= size(A) -1) {
        A = resize.A(size(A)-2)
    }
    else {
        for (int j = index, int j<= size.A -2, j++) {
            A[j] = A[j+1]
        }
    }
    A = resize.A(size(A)-2)
}

#endif // __array_delete__