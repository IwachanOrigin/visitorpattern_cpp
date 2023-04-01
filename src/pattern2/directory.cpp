
#include "visitor.h"

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

void Directory::accept(Visitor* pVisitor)
{
  pVisitor->visit(this);

  std::list<Node*>::iterator it = m_children.begin();
  while(it != m_children.end())
  {
    (*it)->accept(pVisitor);
    it++;
  }
}
