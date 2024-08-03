
#ifndef NODE_H_
#define NODE_H_

#include <string>
#include <list>

namespace design_pattern
{

class Node
{
public:
  explicit Node(const int id, std::string name);
  virtual ~Node() = default;

  virtual void add(Node* pNode) = 0;
  std::list<Node*> find(const std::string& name);
  int getId() { return m_id; }
  std::string getName() { return m_name; }

private:
  int m_id;
  std::string m_name;
};

} // design_pattern

#endif // NODE_H_
