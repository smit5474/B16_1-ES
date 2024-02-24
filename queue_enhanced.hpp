#ifndef __queue_enhanced__
#define __queue_enhanced__

#include <cassert>
#include <vector>

#include "queue.hpp"

//_position is the index of the back of the queue
//_size is number of elements in the queue
//the front of the queue is _position + _size

template <typename T> class Dequeue : public Queue<T>
{
  public:
    // Inherit the constructors of Queue<T>
    using Queue<T>::Queue;

    // Access the element at the back of the queue
    T &back()
    {
        return Queue._storage[_tail()];
    };

    // Const-access the element at the back of the queue
    const T &back() const
    {
        return Queue._storage[_tail()];
    };

    // Add a new element to the front of the queue by copying
    void enqueue_front(const T &value)
    {
        assert(Queue._size < Queue._storage.size());
        auto index = Queue._head() + 1
        if (index >= _storage.size()) 
        { 
            index -= _storage.size(); 
        }
        _storage[index] = value; 
        _size++;
    };

    // Remove the element at the back of the queue
    void dequeue_back()
    {
        assert(Queue._size < Queue._storage.size());
        auto index = _tail() + 1;
        if (index > _storage.size()){
            index -= _storage.size();
        };
        _position = index;
    };

    // Remove all elements from the queue
    void clear() { 
        _position = 0;
        _size = 0;
    };

  protected:
    // Return the index of the element at the back of the queue
    size_t _tail() const
    {
        assert(_size >=1);
        auto index = _position;
        if (index >= _storage.size())
        {
            index -= _storage.size():
        };
        return index;
    };
};

#endif // __queue_enhanced__