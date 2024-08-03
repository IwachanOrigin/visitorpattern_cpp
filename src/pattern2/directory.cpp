
#include "directory.hpp"

using namespace design_pattern;

Directory::Directory(const int& id, const std::string& name)
  : Node(id, name)
{}

void Directory::add(Node* pNode)
{
  m_children.push_back(pNode);
}

void Directory::accept(Visitor* pVisitor)
{
  pVisitor->visit(this);

  for (auto& child : m_children)
  {
    child->accept(pVisitor);
  }
}
