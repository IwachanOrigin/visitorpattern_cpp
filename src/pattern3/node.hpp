
#ifndef NODE_HPP_
#define NODE_HPP_

#include <variant>
#include <string>
#include <vector>

namespace design_pattern
{

struct File;
struct Directory;

using Node = std::variant<File, Directory>;

struct File
{
  int id;
  std::string name;

  explicit File(const int& id, const std::string& name);
};

struct Directory
{
  int id;
  std::string name;
  std::vector<Node> children;

  explicit Directory(const int& id, const std::string& name);
  void add(Node node);
};

std::vector<const File*> findFiles(const Directory& dir, const std::string& name);
} // design_pattern

#endif // NODE_HPP_
