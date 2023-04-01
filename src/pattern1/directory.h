
#ifndef DIRECTORY_H_
#define DIRECTORY_H_

#include "node.h"

namespace design_pattern
{

class Directory : public Node
{
public:
  explicit Directory(const int id, const std::string name);
  virtual ~Directory();
  virtual void add(Node* pNode);
  virtual std::list<Node*>* find(std::string name);

private:
  std::list<Node*> m_children;
};

} // design_pattern

#endif // DIRECTORY_H_
