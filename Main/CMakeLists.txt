set(SOURCES
    main.cpp
)

set(HEADERS
    # main.h
)

add_executable(Main
    ${SOURCES}
    ${HEADERS}
)

target_compile_options(Main PUBLIC
	-Wno-unknown-pragmas
)

target_link_libraries(Main
    ModuleA
	ModuleC
)

target_include_directories(Main PUBLIC
    ${PROJECT_SOURCE_DIR}/ModuleA
)
