
#ifndef NODE_HPP_
#define NODE_HPP_

#include <variant>
#include <string>
#include <vector>

namespace design_pattern
{

class File;
class Directory;

using Node = std::variant<File, Directory>;

std::vector<const File*> findFiles(const Directory& dir, const std::string& name);
} // design_pattern

#endif // NODE_HPP_
