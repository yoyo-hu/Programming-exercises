# [Exception] Stack and Exception

## Description
**【The point of problem is exception】**

Implement the definition of class Stack(last in first out).

    const int MAX_LEN = 5;

    template<class T>

    class Stack

    {

    public:

        explicit Stack();

        bool empty() const;

        int size() const;

        T& top();

        const T& top() const;

        void push(const T& x);

        void pop();

    private:

        T data[MAX_LEN];

        int stack_size;

    };

The max capacity of the Stack is 5. When there are five elements in the Stack,
we should follow the rule if we want to push a new element into stack:

Assume the top element of the Stack is b, the new element is a:

1) if a > b, remove the top element and push the new element into Stack

2) if a <= b, do nothing.

when executing operation pop(), it should throw a double exception if there is
no element in the Stack. when executing operation top(), it should throw a int
exception if there is no element in the Stack. Like the following program:
```
Stack<int> s;

try {

    s.top();

} catch (int) {

    cout << "get top failed" << endl;

}

try {

    s.pop();

} catch (double) {

    cout << "pop failed" << endl;

}
```
**【Sample Out】**

The output should be：
```
get top failed

pop failed
```

**From Eden unknown author.**

