add_library(ModuleC STATIC)

target_sources(ModuleC PRIVATE
	ModuleC.cpp
)

#ここでPUBLICで指定したインクルードパスはtarget_link_librariesしたターゲットでも使えるようになる
target_include_directories(ModuleC PUBLIC
	${CMAKE_CURRENT_SOURCE_DIR}
)

target_compile_options(ModuleC PUBLIC --pedantic)