
#include "node.h"

using namespace design_pattern;

Node::Node(const int id, std::string name)
  : m_id(id)
  , m_name(name)
{
}

std::list<Node*>* Node::find(const std::string name)
{
  std::list<Node*>* pResult = new std::list<Node*>;
  if (this->getName().compare(m_name))
  {
    pResult->push_back(this);
  }
  return pResult;
}
