
#include "node.h"
#include "file.h"
#include "directory.h"
#include <iostream>

using namespace design_pattern;

int main(int argc, char* argv[])
{
  File* file = new File(0, "file1.txt");
  Directory* dir = new Directory(0, "directory1");
  dir->add(file);
  std::list<Node*>* pResult = dir->find("file1.txt");
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
