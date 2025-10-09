/*
the =delete syntax allows developers to explicitly disable certain 
constructors
Preview: Docs Loading link description
 to prevent unintended or unwanted forms of object creation. This helps enforce better class design and avoid subtle bugs.

Deleted constructors are helpful in several scenarios:

Preventing copying or moving: Deleting the copy or move constructor helps avoid accidental object duplication, especially in 
classes
Preview: Docs Loading link description
 managing resources like memory or file handles.

Avoiding implicit conversions: Deleting constructors that accept certain types (e.g., const char*) prevents unwanted implicit conversions and helps preserve class invariants.

Restricting object creation: Deleting specific constructors ensures that 
objects
Preview: Docs Loading link description
 are created only through valid patterns.

Enforcing non-instantiability: Deleting all constructors prevents instantiation of utility or static-only classes.

Maintaining consistency: Explicitly deleting special member 
functions
Preview: Docs Loading link description
 clarifies design intentions and prevents unintended behavior.
 
 */


#include <iostream>
#include <cstring>

class MyClass {
public:
  MyClass() = default;

  MyClass(const MyClass&) = delete;

  MyClass(MyClass&&) = delete;

  MyClass(const char*) = delete;
}; 


int main() {
  MyClass obj1;

  // MyClass obj2 = obj1;       // Error: copy constructor is deleted
  // MyClass obj3("Hello");     // Error: const char* constructor is deleted
}
