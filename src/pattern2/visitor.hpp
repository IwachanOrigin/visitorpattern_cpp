
#ifndef VISITOR_H_
#define VISITOR_H_

namespace design_pattern
{

class File;
class Directory;

class Visitor
{
public:
  explicit Visitor() = default;
  ~Visitor() = default;
  virtual void visit(Directory* pDirectory) = 0;
  virtual void visit(File* pFile) = 0;
};

} // design_pattern

#endif // VISITOR_H_
