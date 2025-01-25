#include <iostream>
#include <memory>

int main() {
  int x = 10;
  std::unique_ptr<int> ptr1 = std::make_unique<int>(x); // Using unique_ptr
  *ptr1 = 20; // Modifies the value of x

  int y = 30;
  std::unique_ptr<int> ptr2 = std::make_unique<int>(y); // Another unique_ptr
  *ptr2 = 40; // Modifies the value of y

  // No dangling pointer issue because smart pointers handle memory automatically
  std::shared_ptr<int> ptr3 = std::make_shared<int>(50); //shared_ptr for shared ownership
  *ptr3 = 60;

  // ptr3 goes out of scope, but the memory is safely released by shared_ptr

  return 0;
}