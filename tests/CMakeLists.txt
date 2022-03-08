
add_executable(testEncode testEncode.cpp)
add_library(Xutils ../Xutils.cpp)
target_link_libraries (testEncode Xutils)

include_directories ("${PROJECT_SOURCE_DIR}/..")
