#include <iostream>
#include <string>

namespace App {
  class Application {
  private:
    std::string appName;

  public:
    Application(const std::string& name) : appName(name) {}

    void start() {
      std::cout << "App started!" << std::endl;
    }

    void stop() {
      std::cout << "App stopped!" << std::endl;
    }

    std::string getName() const {
      return appName;
    }
  };

  namespace Utils {
    void printAppInfo(Application& someApp) {
      std::cout << "Application Name: " << someApp.getName() << std::endl;
    }
  }
}

// globally declare the namespace and use an alias for nested namespace
using namespace App;
namespace AU = App::Utils; // alias

int main() {
    Application   myApp("MyCoolApp");
    myApp.start();                        
    AU::printAppInfo(myApp); // using alias to access nested namespace function
    myApp.stop();
    return 0;
}