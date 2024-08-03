
#include "file.hpp"

using namespace design_pattern;

File::File(const int& id, const std::string& name)
  : Node(id, name)
{
}

void File::add(Node* pNode)
{
}

void File::accept(Visitor* pVisitor)
{
  pVisitor->visit(this);
}
