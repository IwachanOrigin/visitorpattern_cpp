
#ifndef DIRECTORY_HPP_
#define DIRECTORY_HPP_

#include <vector>
#include <string>
#include "node.hpp"

namespace design_pattern
{

class Directory
{
public:
  explicit Directory(const int& id, const std::string& name)
    : m_id(id), m_name(name) {}
  void add(Node node) { m_children.push_back(std::move(node)); }
  int id() const { return m_id; }
  const std::string& name() const { return m_name; }
  const std::vector<Node>& children() const { return m_children; }

private:
  int m_id;
  std::string m_name;
  std::vector<Node> m_children;
};

} // design_pattern


#endif // DIRECTORY_HPP_
