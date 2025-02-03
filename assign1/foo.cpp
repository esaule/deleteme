#include <iostream>

int main (int argc, char* argv[]) {
  size_t size = std::atol(argv[1]);

  std::cout<<size<<", "<<size+2<<"\n";
  return 0;
}
