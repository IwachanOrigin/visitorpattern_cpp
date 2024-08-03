
project(pattern1 CXX)

set(MAIN_SRC
  directory.cpp
  directory.hpp
  file.cpp
  file.hpp
  main.cpp
  node.cpp
  node.hpp
)

add_executable(
  ${PROJECT_NAME}
  ${MAIN_SRC}
)

