
#ifndef FILE_H_
#define FILE_H_

#include "node.hpp"

namespace design_pattern
{

class File : public Node
{
public:
  explicit File(const int& id, const std::string& name);
  virtual ~File() = default;
  virtual void add(Node* pNode) override;
  virtual void accept(Visitor* pVisitor) override;
};

} // design_pattern

#endif // FILE_H_
