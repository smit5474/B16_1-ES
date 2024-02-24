#ifndef __stack_enhanced___
#define __stack_enhanced___

#include "stack.hpp"

template <typename T> class StackEnhanced : public Stack<T>
{
  public:
    // Inherit the Stack<T> constructors as they are
    // https://en.cppreference.com/w/cpp/language/using_declaration
    using Stack<T>::Stack;

    void clear()
    {
        while (Stack<T>::_storage != 0){
            stack.pop();
        };
    }
};

template <typename T>
StackEnhanced<T> &operator<<(StackEnhanced<T> &stack, const T &value)
{
   stack.push(value);
   return stack;
};

#endif // __stack_enhanced___