
#ifndef FIND_VISITOR_H_
#define FIND_VISITOR_H_

#include "visitor.h"

namespace design_pattern
{

class FindVisitor : public Visitor
{
public:
  explicit FindVisitor();
  virtual ~FindVisitor();

  std::list<Node*>* find(Node* pNode, std::string name);
  virtual void visit(Directory* pDirectory);
  virtual void visit(File* pFile);

private:
  std::string m_name;
  std::list<Node*>* m_pResult;
};

} // design_pattern

#endif // FIND_VISITOR_H_
