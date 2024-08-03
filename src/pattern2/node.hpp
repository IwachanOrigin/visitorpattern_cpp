
#ifndef NODE_H_
#define NODE_H_

#include <string>
#include "visitor.hpp"

namespace design_pattern
{

class Node
{
public:
  explicit Node(const int& id, const std::string& name);
  virtual ~Node() = default;

  virtual void add(Node* pNode) = 0;
  virtual void accept(Visitor* pVisitor) = 0;

  int getId() const { return m_id; }
  std::string getName() const { return m_name; }

private:
  int m_id;
  std::string m_name;
};

} // design_pattern

#endif // NODE_H_
