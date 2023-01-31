set(SOURCES
    ModuleA.cpp
)

set(HEADERS
    ModuleA.h
)

add_library(ModuleA STATIC
    ${SOURCES}
    ${HEADERS}
)

target_link_libraries(ModuleA
    ModuleB
)

target_include_directories(ModuleA PUBLIC
    ${PROJECT_SOURCE_DIR}/ModuleB
)