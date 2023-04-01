
#include "directory.h"

using namespace design_pattern;

Directory::Directory(const int id, const std::string name)
  : Node(id, name)
{}

Directory::~Directory()
{}

void Directory::add(Node* pNode)
{
  m_children.push_back(pNode);
}

std::list<Node*>* Directory::find(std::string name)
{
  std::list<Node*>* pResult = new std::list<Node*>;
  std::list<Node*>::iterator it = m_children.begin();
  while(it != m_children.end())
  {
    std::list<Node*>* temp = (*it)->find(name);
    if (temp->size() != 0)
    {
      pResult->merge(*temp);
      delete temp;
    }
    it++;
  }
  return pResult;
}
