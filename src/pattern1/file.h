
#ifndef FILE_H_
#define FILE_H_

#include "node.h"

namespace design_pattern
{

class File : public Node
{
public:
  explicit File(const int id, const std::string name);
  virtual ~File();
  virtual void add(Node* pNode);
};

} // design_pattern

#endif // FILE_H_
