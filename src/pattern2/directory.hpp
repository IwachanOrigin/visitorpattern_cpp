
#ifndef DIRECTORY_H_
#define DIRECTORY_H_

#include <list>
#include "node.hpp"

namespace design_pattern
{

class Directory : public Node
{
public:
  explicit Directory(const int& id, const std::string& name);
  virtual ~Directory() = default;
  virtual void add(Node* pNode) override;
  virtual void accept(Visitor* pVisitor) override;

private:
  std::list<Node*> m_children;
};

} // design_pattern

#endif // DIRECTORY_H_

