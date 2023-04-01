
#include "findvisitor.h"

using namespace design_pattern;

FindVisitor::FindVisitor()
{
  m_name = "";
  m_pResult = new std::list<Node*>;
}

FindVisitor::~FindVisitor()
{
  if (m_pResult)
  {
    delete m_pResult;
    m_pResult = nullptr;
  }
}

std::list<Node*>* FindVisitor::find(Node* pNode, std::string name)
{
  m_name = name;
  pNode->accept(this);
  return m_pResult;
}

void FindVisitor::visit(Directory* pDirectory)
{
  if (m_name == pDirectory->getName())
  {
    m_pResult->push_back(pDirectory);
  }
}

void FindVisitor::visit(File* pFile)
{
  if (m_name == pFile->getName())
  {
    m_pResult->push_back(pFile);
  }
}
