template <typename T> class Vector
{

public:
    typedef T *iterator;
    // Default constructor to initialise
    // an initial _capacity of 1 element and
    // allocating storage using dynamic allocation
    Vector()
    {
        arr = new T[1];
        _first = arr;
        _last = _first;
        _capacity = 1;
        current = 0;
    }
    
    T &operator[](int i) { return arr[i]; }

    void clear()
    {
        T* temp = new T[1];
        delete[] arr;
        arr = temp;

        _first = arr;
        _last = arr;
        current = 0;
        _capacity = 1;
    }

    iterator erase(iterator first, iterator last);

    // Function to add an element at the last
    void push_back(T data)
    {
 
        // if the number of elements is equal to the
        // _capacity, that means we don't have space to
        // accommodate more elements. We need to double the
        // _capacity
        if (current == _capacity) {
            T* temp = new T[2 * _capacity];
 
            // copying old array elements to new array
            for (int i = 0; i < _capacity; i++) {
                temp[i] = arr[i];
            }
 
            // deleting previous array
            delete[] arr;
            _capacity *= 2;
            arr = temp;
        }
 
        // Inserting data
        arr[current] = data;
        current++;
        _first = arr;
        _last = arr+current;
    }
    
    iterator begin()
    {
        return _first;
    }
    iterator end()
    {
        return _last;
    }
    void resize (int newSize)
    {
        if(newSize>=_capacity)
        {
            T* temp = new T[newSize];
 
            // copying old array elements to new array
            for (int i = 0; i < current; i++) {
                temp[i] = arr[i];
            }
 
            // deleting previous array
            delete[] arr;
            arr = temp;
        }
        _first = arr;
        _last = arr + newSize;
        current = newSize;
    }
 
    // function to extract element at any index
    T get(int index)
    {
 
        // if index is within the range
        if (index < current)
            return arr[index];
    }
 
 
    // function to get size of the vector
    int size() { return current; }
 
    // function to get _capacity of the vector
    int capacity() { return _capacity; }
 
private:

    T* arr;
    int _capacity;
    int current;
    iterator _first; // index 0
    iterator _last;
};