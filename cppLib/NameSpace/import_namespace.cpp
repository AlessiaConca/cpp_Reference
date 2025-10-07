namespace WebTools {
  int maxConnectionLimit = 100;
}

// Bring everything from WebTools into this scope
using namespace WebTools;
// import only maxConnectionLimit from WebTools
using WebTools::maxConnectionLimit;

int main() {
  // Now we can access maxConnectionLimit directly
  int currentLimit = maxConnectionLimit;
  return 0;
}

/*
If the namespace is imported globally (outside of any 
function), its members will be available globally. 
If the namespace is imported locally (inside a function, 
class, or block), its members will only be available within 
the local scope. Accessing members outside of the local 
scope will require us to use the full namespace name to 
access the member (SomeNamespace::SomeMember).
*/