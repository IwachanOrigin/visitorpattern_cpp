
project(pattern1 CXX)

set(MAIN_SRC
  directory.cpp
  directory.h
  file.cpp
  file.h
  main.cpp
  node.cpp
  node.h
)

add_executable(
  ${PROJECT_NAME}
  ${MAIN_SRC}
)

