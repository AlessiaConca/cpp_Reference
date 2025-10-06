#include <iostream>
#include <stack>
#include <queue>

int main()
{
  //queue follows FIFO order
  std::queue<int> order;

  order.push(10);
  order.push(9);
  order.push(8);
  
  std::cout << "size: " << order.size() << "\n";
  
  while(!order.empty()) {
    std::cout << order.front() << "\n";
    order.pop();
  }

  return 0;
}