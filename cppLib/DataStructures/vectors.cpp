#include <iostream>
#include <vector>

int main () {
  std::vector < int >primes = { 2, 3, 5, 7, 11 };

  std::cout << primes[2] << "\n";
  std::cout << primes.front () << "\n";
  std::cout << primes.back () << "\n";

  primes.push_back (13);
  primes.push_back (17);

  primes.pop_back ();

  for (int i = 0; i < primes.size (); i++)
    {
      std::cout << primes[i] << " ";
    }

  return 0;
}

/*
Arrays vs Vectors:

- Size:
  Arrays have a fixed size, which must be known at compile time. Vectors are dynamic and can grow or shrink in size as needed.
- Memory Management:
  Arrays are allocated on the stack (for local arrays) or in static memory (for global
    arrays), while vectors are allocated on the heap, which allows for dynamic resizing.
- Functionality:
  Vectors come with a variety of built-in functions for adding, removing, and manipulating elements
    (e.g., push_back, pop_back, insert, erase), while arrays do not have such functionalities.
- Safety:
  Vectors provide bounds checking with the at() method, which throws an exception if an out
    -of-bounds access is attempted. Arrays do not provide this safety feature.
- Performance:
  Arrays can be slightly faster than vectors for fixed-size data due to lower overhead, but
    vectors are generally efficient and the performance difference is often negligible for most applications.
- Usage:
  Arrays are typically used when the size of the data set is known and constant, while vectors
    are preferred for situations where the size may change or is not known in advance.

In summary, use arrays for fixed-size collections and vectors for dynamic collections that require flexibility and additional functionality.
*/