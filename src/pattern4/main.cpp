
#include "node.hpp"
#include "file.hpp"
#include "directory.hpp"
#include <iostream>

using namespace design_pattern;

int main(int argc, char* argv[])
{
  File file(0, "file1.txt");
  Directory dir(0, "directory1");
  dir.add(file);

  auto pResult = findFiles(dir, "file1.txt");
  for (auto& _node : pResult)
  {
    std::cout << "find name :" << _node->name() << std::endl;
  }

  return 0;
}
