#include <iostream>
#include <stack>
#include <climits>
using namespace std;
class MinStack {
public:
    MinStack() {
        top_ptr = -1;
    }

    void push(int x) {
        if (top_ptr == -1) {
            
            top_ptr++;
            data[top_ptr] = x;
            minStack.push(x);
        } else {
            
            top_ptr++;
            data[top_ptr] = x;
            
            if (x <= minStack.top()) {
                minStack.push(x);
            }
        }
    }

    void pop() {
        if (top_ptr >= 0) {
            
            if (data[top_ptr] == minStack.top()) {
                minStack.pop();
            }
            top_ptr--;
        }
    }

    int top() {
        if (top_ptr >= 0) {
            return data[top_ptr];
        }
        return -1; 
    }

    int getMin() {
        if (!minStack.empty()) {
            return minStack.top();
        }
        return -1;
    }

private:
    int data[10000]; 
    int top_ptr; 
    stack<int> minStack; 
};

int main() {
    MinStack stack;

    stack.push(5);
    stack.push(2);
    stack.push(4);
    stack.push(7);

    cout << "Current Stack: ";
    while (stack.top() != -1) {
        cout << stack.top() << " ";
        stack.pop();
    }
    cout << endl;
    stack.push(5);
    stack.push(2);
    stack.push(4);
    stack.push(7);
    cout << "Minimum Element: " << stack.getMin() << endl;
cout<<"Siddharth 22BCS16071";
    return 0;
}
