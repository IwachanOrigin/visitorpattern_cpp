
#include "node.hpp"

using namespace design_pattern;

Node::Node(const int id, std::string name)
  : m_id(id)
  , m_name(name)
{
}

std::list<Node*> Node::find(const std::string& name)
{
  std::list<Node*> pResult;
  if (name == this->getName())
  {
    pResult.push_back(this);
  }
  return pResult;
}

