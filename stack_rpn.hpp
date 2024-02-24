#ifndef __stack_rpn__
#define __stack_rpn__

#include "stack.hpp"
#include <cassert>
#include <functional>

template <typename T> class StackRPN : public Stack<T>
{
  public:
    // Inherit the Stack<T> constructors as they are
    // https://en.cppreference.com/w/cpp/language/using_declaration
    using Stack<T>::Stack;

    const T plus(Stack<T> &stack){
        int b = stack.top(); stack.pop();
        int a = stack.top(); stack.pop();
        stack.push(a + b);
    };

    const T minus(Stack<T> &stack){
        int b = stack.top(); stack.pop();
        int a = stack.top(); stack.pop();
        stack.push(a - b);
    };

    const T multiplies(Stack<T> &stack){
        int b = stack.top(); stack.pop();
        int a = stack.top(); stack.pop();
        stack.push(a * b);
    };

    const T divides(Stack<T> &stack){
        int b = stack.top(); stack.pop();
        int a = stack.top(); stack.pop();
        if (b != 0)
            stack.push(a / b);
        else
            std::cerr << "Error: Division by zero\n";
    };

    const T negate(Stack<T> &stack){
        int a = stack.top(); stack.pop();
        stack.push(-a);
    };

    };
#endif // __stack_rpn__