
#include "directory.hpp"

using namespace design_pattern;

Directory::Directory(const int& id, const std::string& name)
  : Node(id, name)
{}

void Directory::add(Node* pNode)
{
  m_children.push_back(pNode);
}

std::list<Node*>* Directory::find(const std::string& name)
{
  std::list<Node*>* pResult = new std::list<Node*>;
  for (auto& _node : m_children)
  {
    auto temp = _node->find(name);
    if (!temp->empty())
    {
      pResult->merge(*temp);
      delete temp;
    }
  }
  return pResult;
}
