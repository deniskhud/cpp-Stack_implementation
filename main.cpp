#include "Stack.h"

int main() {

    // Test 1: Create a stack and push some elements
    Stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);

    std::cout << "After pushing 10, 20, 30:" << std::endl;
    st.print();  // Expected Output: Stack: 30 20 10 

    // Test 2: Check the size of the stack
    std::cout << "Stack size: " << st.Size() << std::endl;  // Expected Output: 3

    // Test 3: Check the top element
    std::cout << "Top element: " << st.Top() << std::endl;  // Expected Output: 30

    // Test 4: Pop an element and check the top element again
    st.pop();
    std::cout << "After popping, new top: " << st.Top() << std::endl;  // Expected Output: 20

    // Test 5: Check the size again
    std::cout << "Stack size after pop: " << st.Size() << std::endl;  // Expected Output: 2

    // Test 6: Pop remaining elements and check if stack is empty
    st.pop();
    st.pop();
    std::cout << "Stack size after popping all elements: " << st.Size() << std::endl;  // Expected Output: 0
    st.print();  // Expected Output: Stack is Empty

    // Test 7: Attempt to access Top on an empty stack (should throw exception)
    try {
        st.Top();  // Should throw exception since the stack is empty
    }
    catch (const std::runtime_error& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;  // Expected Output: Stack is empty!
    }
	
	return 0;
}