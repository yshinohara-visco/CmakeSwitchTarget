if(${BUILD_TARGET} STREQUAL PC)
    set(SOURCES
        ModuleB_PC.cpp
    )
elseif(${BUILD_TARGET} STREQUAL RASPI_NATIVE OR ${BUILD_TARGET} STREQUAL RASPI_CROSS)
    set(SOURCES
        ModuleB_RASPI.cpp
    )
endif()

set(HEADERS
    ModuleB.h
)

add_library(ModuleB STATIC
    ${SOURCES}
    ${HEADERS}
)

target_include_directories(ModuleB PUBLIC
)