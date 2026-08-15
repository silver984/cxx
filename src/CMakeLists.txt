file(GLOB PROJECT_SRC ${CMAKE_CURRENT_SOURCE_DIR}/*.cc)

target_sources(${PROJECT_NAME} PRIVATE ${PROJECT_SRC})

include(${CMAKE_SOURCE_DIR}/cmake/CPM.cmake)

CPMAddPackage(
  NAME fmt
  GITHUB_REPOSITORY fmtlib/fmt
  GIT_TAG 12.1.0
  GIT_SHALLOW TRUE
)

target_link_libraries(${PROJECT_NAME} PRIVATE fmt::fmt)