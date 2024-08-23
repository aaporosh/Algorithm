#include <bits/stdc++.h>
using namespace std;

const int n = 10;
int arr[n];
int top = -1;

void push(int value) {
    if (top == n - 1) {
        cout << "Stack overflow" << endl;
        return;
    } else {
        top++;
        arr[top] = value;
    }
}

void pop() {
    if (top == -1) {
        cout << "Stack is empty" << endl;
    } else {
        top--;
    }
}

void display() {
    if (top == -1) {
        cout << "Stack is empty" << endl;
        return;
    }
    cout << "Stack : ";
    for (int i = top; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    push(5);
    display();

    push(10);
    push(20);
    display();

    pop();
    display();
}
