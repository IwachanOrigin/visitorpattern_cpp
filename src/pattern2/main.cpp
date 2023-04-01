
#include "visitor.h"
#include "findvisitor.h"
#include <iostream>

using namespace design_pattern;

int main(int argc, char* argv[])
{
  File* file = new File(0, "file1.txt");
  Directory* dir = new Directory(0, "directory1");
  dir->add(file);

  FindVisitor fv;
  std::list<Node*>* pResult = fv.find(dir, "file1.txt");
  for (auto it = pResult->begin(); it != pResult->end();)
  {
    std::cout << "find name :" << (*it)->getName() << std::endl;
    it++;
  }

  delete file;
  file = nullptr;
  delete dir;
  dir = nullptr;
  return 0;
}
