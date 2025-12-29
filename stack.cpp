#include <iostream>
#include <vector>
using namespace std;

class Stack {
private:
    vector<int> v;
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(int data) {
        v.push_back(data);
        top++;
    }

    void show() {
        for (int i = 0; i <= top; i++) {
            cout << v[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack s;
    s.push(45);
    s.push(70);
    s.show();

    return 0;
}
