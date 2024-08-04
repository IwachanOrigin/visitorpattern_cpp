
#include "node.hpp"
#include "file.hpp"
#include "directory.hpp"

namespace design_pattern
{

std::vector<const File*> findFiles(const Directory& dir, const std::string& name)
{
  std::vector<const File*> result;
  auto visitor = [&name, &result](const auto& node) {
    using T = std::decay_t<decltype(node)>;
    if constexpr (std::is_same_v<T, File>)
    {
      if (node.name() == name)
      {
        result.push_back(&node);
      }
    }
    else if constexpr (std::is_same_v<T, Directory>)
    {
      const auto& subResult = findFiles(node, name);
      result.insert(result.end(), subResult.begin(), subResult.end());
    }
  };

  for (const auto& child : dir.children())
  {
    std::visit(visitor, child);
  }

  return result;
}

}
