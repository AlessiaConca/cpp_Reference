#include <iostream>
#include <stack>
#include <queue>

int main()
{
  //stack follows LIFO order
  std::stack<int> tower;
  
  tower.push(3);
  tower.push(2);
  tower.push(1);
  
  std::cout << "size: " << tower.size() << "\n";
  
  while(!tower.empty()) {
    std::cout << tower.top() << "\n";
    tower.pop();
  }
  
 
  return 0;
}