
project(pattern3 CXX)

set(MAIN_SRC
  main.cpp
  node.cpp
  node.hpp
)

add_executable(
  ${PROJECT_NAME}
  ${MAIN_SRC}
)

