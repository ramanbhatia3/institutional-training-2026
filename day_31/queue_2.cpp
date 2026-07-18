#include <iostream>
using namespace std;

class Queue {
    int *arr;
    int size;
    int front = -1, rear = -1;

public:
    Queue(int s) {
        size = s;
        arr = new int[size];
    }

    ~Queue() {
        delete[] arr;
    }

    void enqueue() { // insert at rear in Q
        int val;
        cout << "Enter value to enqueue: ";
        cin >> val;

        if (front == -1 && rear == -1) {
            front = rear = 0;
            arr[rear] = val;
        }
        else if (rear == size - 1) {
            cout << "Queue is full. Cannot enqueue " << val << endl;
            return;
        }
        else {
            arr[++rear] = val;
        }

        cout << "Enqueued: " << val << endl;
    }

    void dequeue() {
        if (front == -1) {
            cout << "Queue is empty. Cannot dequeue." << endl;
            return;
        }
        else {
            cout << "Dequeued: " << arr[front] << endl;
            front++;

            if (front > rear) {
                front = rear = -1;
            }
        }
    }

    void dequeueRear() {
        if (rear == -1) {
            cout << "Queue is empty. Cannot dequeue from rear." << endl;
            return;
        }
        else {
            cout << "Dequeued from rear: " << arr[rear] << endl;
            rear--;

            if (rear < front) {
                front = rear = -1;
            }
        }
    }

    bool isFull() {
        if (rear == size - 1) {
            return true;
        }
        else {
            return false;
        }
    }

    bool isEmpty() {
        if (front == -1) {
            return true;
        }
        else {
            return false;
        }
    }

    void display() {
        if (front == -1) {
            cout << "Queue is empty." << endl;
            return;
        }

        cout << "Queue elements: ";

        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }

        cout << endl;
    }
};

int main() {
    Queue Q(5);

    do {
        int choice;

        cout << "\n1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Dequeue from Rear\n";
        cout << "4. Check if Full\n";
        cout << "5. Check if Empty\n";
        cout << "6. Display\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";

        cin >> choice;

        switch (choice) {

        case 1:
            Q.enqueue();
            break;

        case 2:
            Q.dequeue();
            break;

        case 3:
            Q.dequeueRear();
            break;

        case 4:
            if (Q.isFull()) {
                cout << "Queue is full." << endl;
            }
            else {
                cout << "Queue is not full." << endl;
            }
            break;

        case 5:
            if (Q.isEmpty()) {
                cout << "Queue is empty." << endl;
            }
            else {
                cout << "Queue is not empty." << endl;
            }
            break;

        case 6:
            Q.display();
            break;

        case 7:
            cout << "Exiting..." << endl;
            return 0;

        default:
            cout << "Invalid choice. Please try again." << endl;
        }

    } while (true);
}