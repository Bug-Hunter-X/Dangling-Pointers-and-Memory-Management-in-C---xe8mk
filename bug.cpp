int main() {
  int x = 10;
  int *ptr = &x; 
  *ptr = 20; // Modifies the value of x

  int y = 30;
  ptr = &y; // ptr now points to y
  *ptr = 40; // Modifies the value of y

  // Dangling pointer issue
  int z = 50;
  {
    int *tempPtr = &z;
    // tempPtr goes out of scope here. It's a dangling pointer now.
  }
  //*tempPtr = 60; // Use of dangling pointer (undefined behavior)

  return 0; 
}