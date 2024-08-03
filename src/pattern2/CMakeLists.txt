
project(pattern2 CXX)

set(MAIN_SRC
  directory.cpp
  directory.hpp
  file.cpp
  file.hpp
  findvisitor.cpp
  findvisitor.hpp
  main.cpp
  node.cpp
  node.hpp
  visitor.hpp
)

add_executable(
  ${PROJECT_NAME}
  ${MAIN_SRC}
)

