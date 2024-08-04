
cmake_minimum_required(VERSION 3.24)

# set the project name
project(visitor_pattern CXX)

cmake_policy(SET CMP0087 NEW)
cmake_policy(SET CMP0135 NEW)

# output directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
# output compile_commands.json
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
add_definitions(-DWIN32_LEAN_AND_MEAN -DNOMINMAX -DUNICODE -D_UNICODE)

# Enable the filtering of Visual Studio
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

# Keep the auto-generated files together in the Visual Studio source tree.
# Because by default it it added to Source Files in the Visual Studio source tree.
# This is very hard to see.
set_property(GLOBAL PROPERTY AUTOGEN_TARGETS_FOLDER AutoGenFiles)
set_property(GLOBAL PROPERTY AUTOGEN_SOURCE_GROUP AutoGenFiles)

add_subdirectory(pattern1)
add_subdirectory(pattern2)
add_subdirectory(pattern3)
add_subdirectory(pattern4)

