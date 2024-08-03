
#include "visitor.hpp"
#include "findvisitor.hpp"
#include <iostream>

using namespace design_pattern;

int main(int argc, char* argv[])
{
  File file(0, "file1.txt");
  Directory dir(0, "directory1");
  dir.add(&file);

  FindVisitor fv;
  auto pResult = fv.find(&dir, "file1.txt");
  for (auto& _node : pResult)
  {
    std::cout << "find name :" << _node->getName() << std::endl;
  }

  return 0;
}
