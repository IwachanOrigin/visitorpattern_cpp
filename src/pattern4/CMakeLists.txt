
project(pattern4 CXX)

set(MAIN_SRC
  directory.hpp
  file.hpp
  main.cpp
  node.cpp
  node.hpp
)

add_executable(
  ${PROJECT_NAME}
  ${MAIN_SRC}
)

