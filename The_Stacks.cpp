#include <iostream>
#include <stack>

using namespace std;

// the stack : the last item pushed is always the first item popped. 

int main(int argc, char *argv[]) {
    
    // create an  integer stack
    std::stack<int> first;
    
    // size returns the number of elements in the stack.
    std::cout << "size of first: " << first.size() << '\n';
    
    // # --------------------------------------------------------------------")
    
    // create an  integer stack
    std::stack<int> my_integer_stack;
    
    my_integer_stack.push(10);
    my_integer_stack.push(20);
    
    // Take 5 from the top. 
    my_integer_stack.top() -= 5;
    
    std::cout << "mystack.top() is now " << my_integer_stack.top() << '\n';

    // # --------------------------------------------------------------------")
    
    std::stack<int> mystack;

    int sum (0);
    
    for (int i=1;i<=10;i++) {
        
        //push inserts a new element at the top of the stack, above its current top element.
        mystack.push(i);
    }
    

    // empty Returns whether the stack is empty
    while (!mystack.empty())
        {
            // top returns a reference to the top element in the stack. 
            sum += mystack.top();
            
            //pop removes the element on top of the stack, effectively reducing its size by one.
            mystack.pop();
        }
    
    std::cout << "total: " << sum << '\n';
    
    // # --------------------------------------------------------------------")


    // create a string stack
    std::stack<std::string> my_string_stack;
    
    // emplace adds a new element at the top of the stack, above its current top element. 
    my_string_stack.emplace ("First sentence");
    my_string_stack.emplace ("Second sentence");
    
    std::cout << "mystack contains:\n";
    
    while (!my_string_stack.empty())
        {
            // top returns a reference to the top element in the stack. 
            std::cout << my_string_stack.top() << '\n';
            my_string_stack.pop();
        }
}