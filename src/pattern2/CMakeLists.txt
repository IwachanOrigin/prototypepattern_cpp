
project(pattern2 CXX)

set(MAIN_SRC
  main.cpp
  piece.h
  location.h
  location.cpp
)

add_executable(
  ${PROJECT_NAME}
  ${MAIN_SRC}
)

