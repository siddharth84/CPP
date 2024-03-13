#include <iostream>
#include <queue>
using namespace std;
int findMinimum(queue<int> q) {
    if (q.empty()) {
        throw logic_error("Queue is empty.");
    }

    int min = q.front();
    q.pop();

    while (!q.empty()) {
        if (q.front() < min) {
            min = q.front();
        }
        q.pop();
    }

    return min;
}
int main() {
    queue<int> queue;

    queue.push(5);
    queue.push(3);
    queue.push(8);
    queue.push(1);

    cout << "Queue elements: ";
    while (!queue.empty()) {
        cout << queue.front() << " ";
        queue.pop();
    }
    cout << endl;

    queue.push(5);
    queue.push(3);
    queue.push(8);
    queue.push(1);

    int min = findMinimum(queue);
    cout << "Minimum value in the queue: " << min << endl;

    bool isEmpty = queue.empty();
    cout << "Is the queue empty? " << (isEmpty ? "Yes" : "No") << endl;

    int size = queue.size();
    cout << "Size of the queue: " << size << endl;
cout<<"Siddharth 22BCS16071";
    return 0;
}
