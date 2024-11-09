#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> myQueue;

    // 1. Check if the queue is empty
    if (myQueue.empty())
    {
        cout << "Queue is initially empty." << endl;
    }

    // 2. Add elements to the queue (enqueue)
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);
    cout << "Added 10, 20, 30 to the queue." << endl;

    // 3. Get and print the size of the queue
    cout << "Queue size: " << myQueue.size() << endl;

    // 4. Access the front element
    cout << "Front element: " << myQueue.front() << endl;

    // 5. Access the back element
    cout << "Back element: " << myQueue.back() << endl;

    // 6. Remove an element from the queue (dequeue)
    myQueue.pop();
    cout << "Removed the front element from the queue." << endl;

    // 7. Access the front element after pop
    cout << "New front element after pop: " << myQueue.front() << endl;

    // 8. Access the back element after pop
    cout << "New back element after pop: " << myQueue.back() << endl;

    // 9. Check if the queue is empty after operations
    if (myQueue.empty())
    {
        cout << "The queue is now empty." << endl;
    }
    else
    {
        cout << "The queue is not empty." << endl;
    }

    // 10. Get and print the size of the queue after pop
    cout << "Queue size after pop: " << myQueue.size() << endl;

    return 0;
}