
#include "findvisitor.hpp"

using namespace design_pattern;

std::list<Node*> FindVisitor::find(Node* pNode, const std::string& name)
{
  m_name = name;
  pNode->accept(this);
  return m_pResult;
}

void FindVisitor::visit(Directory* pDirectory)
{
  if (m_name == pDirectory->getName())
  {
    m_pResult.push_back(pDirectory);
  }
}

void FindVisitor::visit(File* pFile)
{
  if (m_name == pFile->getName())
  {
    m_pResult.push_back(pFile);
  }
}

