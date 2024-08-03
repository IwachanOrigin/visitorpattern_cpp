
#ifndef FIND_VISITOR_H_
#define FIND_VISITOR_H_

#include <list>
#include "visitor.hpp"
#include "file.hpp"
#include "directory.hpp"

namespace design_pattern
{

class FindVisitor : public Visitor
{
public:
  explicit FindVisitor() = default;
  virtual ~FindVisitor() = default;

  std::list<Node*> find(Node* pNode, const std::string& name);
  virtual void visit(Directory* pDirectory);
  virtual void visit(File* pFile);

private:
  std::string m_name = "";
  std::list<Node*> m_pResult;
};

} // design_pattern

#endif // FIND_VISITOR_H_
