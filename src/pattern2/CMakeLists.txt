
project(pattern2 CXX)

set(MAIN_SRC
  directory.cpp
  file.cpp
  findvisitor.cpp
  findvisitor.h
  main.cpp
  node.cpp
  visitor.h
)

add_executable(
  ${PROJECT_NAME}
  ${MAIN_SRC}
)

