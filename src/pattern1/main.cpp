
#include "node.h"
#include "file.h"
#include "directory.h"
#include <iostream>

using namespace design_pattern;

int main(int argc, char* argv[])
{
  File file = File(0, "file1.txt");
  Directory dir = Directory(0, "directory1");
  std::list<Node*>* pResult = dir.find("directory1");
  for (int i = 0; i < pResult->size(); i++)
  {
    std::cout << "find name : "  << std::endl;
  }
  return 0;
}
