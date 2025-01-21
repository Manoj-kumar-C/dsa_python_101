#include <iostream>
using namespace std;

int queue[100], front = -1, rear = -1, n = 100;

void enqueue(int val) {
    if (rear >= n - 1) {
        cout << "Queue Overflow" << endl;
    } else {
        if (front == -1) front = 0; // Set front if adding the first element
        rear++;
        queue[rear] = val;
        cout << val << " enqueued into the queue." << endl;
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        cout << "Queue Underflow" << endl;
    } else {
        cout << "The dequeued element is: " << queue[front] << endl;
        front++;
        if (front > rear) { // Reset queue if empty
            front = rear = -1;
        }
    }
}

void display() {
    if (front == -1) {
        cout << "Queue is Empty" << endl;
    } else {
        cout << "Elements in the queue are: ";
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}

void peek() {
    if (front == -1) {
        cout << "Queue is Empty" << endl;
    } else {
        cout << "Front element is: " << queue[front] << endl;
    }
}

int main() {
    int ch, val;

    cout << "1. Enqueue an element" << endl;
    cout << "2. Dequeue an element" << endl;
    cout << "3. Show the front element in the Queue" << endl;
    cout << "4. Display the elements in the Queue" << endl;
    cout << "5. Exit" << endl;

    do {
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch) {
            case 1:
                cout << "Enter the element to enqueue: ";
                cin >> val;
                enqueue(val);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid Choice" << endl;
        }
    } while (ch != 5);

    return 0;
}
