
#ifndef FILE_HPP_
#define FILE_HPP_

#include <string>

namespace design_pattern
{

class File
{
public:
  explicit File(const int& id, const std::string& name)
    : m_id(id), m_name(name) {}
  int id() const { return m_id; }
  const std::string& name() const { return m_name; }

private:
  int m_id;
  std::string m_name;
};

}// design_pattern

#endif // FILE_HPP_
