#include <iostream>

// Lab 10 — Jaylen Chae
// CIS 5 Week 10 · References & pointers

// Swapped using references 
void swap_values(int& a, int& b) {
  int temp = a;
  a = b;
  b = temp;
}

int main() {
  int x = 3, y = 7;
  std::cout << "Before: " << x << " " << y << "\n";
  // TODO: swap_values(x, y);
  swap_values(x, y);
  std::cout << "After: " << x << " " << y << "\n";
  // TODO: pointer walkthrough with int* p = &x;
  int* p = &x;
  std::cout << "This is the pointer walkthrough " << *p << "\n"; 
  return 0;
 }

