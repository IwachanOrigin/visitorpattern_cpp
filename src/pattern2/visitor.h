
#ifndef VISITOR_H_
#define VISITOR_H_

#include <list>
#include <string>

namespace design_pattern
{

class Directory;
class File;

class Visitor
{
public:
  explicit Visitor() = default;
  ~Visitor() = default;
  virtual void visit(Directory* pDirectory) = 0;
  virtual void visit(File* pFile) = 0;
};

class Node
{
public:
  explicit Node(const int id, std::string name);
  virtual ~Node() = default;

  int getId() { return m_id; }
  std::string getName() { return m_name; }

  virtual void add(Node* pNode) = 0;
  virtual void accept(Visitor* pVisitor) = 0;

private:
  int m_id;
  std::string m_name;
};

class File : public Node
{
public:
  explicit File(const int id, const std::string name);
  virtual ~File();
  virtual void add(Node* pNode);
  virtual void accept(Visitor* pVisitor);
};

class Directory : public Node
{
public:
  explicit Directory(const int id, const std::string name);
  virtual ~Directory();
  virtual void add(Node* pNode);
  virtual void accept(Visitor* pVisitor);

private:
  std::list<Node*> m_children;
};

} // design_pattern

#endif // VISITOR_H_
