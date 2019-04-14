#ifndef _INT_STACK_
#define _INT_STACK_
#include<iostream>
using namespace std;

class IntStack {
  int size;
  int *numbers;
  int pos;

public:
  IntStack(int n = 100) : size(n), pos(0) { numbers = new int[size]; }
  ~IntStack() { delete [] numbers; }

  int getSize() const { return size; }
  int getPos() const { return pos; }
  bool empty() const { return 0 == pos; }
  void pop() { if (pos > 0) --pos; }
  int top() const { return pos > 0 ? numbers[pos-1] : -1000000; }
  void push(int i) {
    if (pos < size) {
      numbers[pos++] = i;
    } else cerr << "FULL!" << endl;
  }
  void reverse() {
    for (int i = 0; i < pos/2; ++i) {
      int tmp = numbers[i];
      numbers[i] = numbers[pos - 1 - i];
      numbers[pos - 1 - i] = tmp;
    }
  }
  void display() const {
    for (int i = 0; i < pos; ++i) cout << numbers[i] << ' ';
    cout << endl;
  }
};

#endif // _INT_STACK_
