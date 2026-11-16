class MinStack {
private:
  static const int MAXN = 100000;
  int data[MAXN]; // хранилище стека
  int mins[MAXN]; // хранилище минимумов
  int sz;         // размер

public:
  MinStack() { sz = 0; }

  void push(int x) {

    data[sz] = x;
    if (sz == 0)
      mins[sz] = x;
    else
      mins[sz] = (x < mins[sz - 1]) ? x : mins[sz - 1];

    sz++;
  }

  void pop() { sz--; }

  int top() { return data[sz - 1]; }

  bool empty() const { return sz == 0; }

  int getMin() { return mins[sz - 1]; }
};

// #include <iostream>
// using namespace std;
//
// int main() {
//   MinStack st;
//   st.push(5);
//   st.push(2);
//   st.push(7);
//   st.push(1);
//
//   cout << "min = " << st.getMin() << endl;
//   st.pop();
//   cout << "min = " << st.getMin() << endl;
//   st.pop();
//   cout << "min = " << st.getMin() << endl;
//   st.pop();
//   cout << "min = " << st.getMin() << endl;
//   cout << "empty = " << st.empty() << endl;
//
//   return 0;
// }
