#include <string>

using namespace std;

template<typename T, typename U>
class Pair {
private:
  T element1;
  U element2;

public:
  Pair(T e1, U e2): element1(e1), element2(e2) {}
  void displayPair() {
    cout << "element 1: " << element1 << ", " << "element 2: " << element2 << endl;
  }
};

int main() {
  Pair<int, string> myPair(1, "One");
  myPair.displayPair();
  return 0;
}