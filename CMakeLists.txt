cmake_minimum_required(VERSION 3.21)

project(lv2lint
    VERSION 0.16.2
    DESCRIPTION "Check whether a given LV2 plugin is up to the specification"
    HOMEPAGE_URL https://github.com/ascii255/lv2lint
    LANGUAGES C
)

set(NAMESPACE_NAME ${PROJECT_NAME})

find_package(PkgConfig REQUIRED)

pkg_check_modules(LILV REQUIRED lilv-0)

include(CMakePackageConfigHelpers)
include(GNUInstallDirs)

add_subdirectory(${PROJECT_SOURCE_DIR}/subprojects/mapper.lv2)
add_subdirectory(${PROJECT_SOURCE_DIR}/subprojects/varchunk)

add_executable(${PROJECT_NAME})

set_target_properties(${PROJECT_NAME} PROPERTIES
    C_STANDARD_REQUIRED YES
    LINKER_LANGUAGE C
)

target_compile_features(${PROJECT_NAME} PUBLIC c_std_23)

file(GLOB_RECURSE LV2_LINT_HEADER_FILES ${PROJECT_SOURCE_DIR}/lv2lint/*.h)
file(GLOB_RECURSE LV2_LINT_SOURCE_FILES ${PROJECT_SOURCE_DIR}/src/*.c)

target_sources(${PROJECT_NAME} PRIVATE
    ${PROJECT_SOURCE_DIR}/lv2lint/lv2lint.h
    ${PROJECT_SOURCE_DIR}/lv2lint/lv2lint_shm.h
    ${PROJECT_SOURCE_DIR}/lv2lint/lv2lint_syscall.h
    ${PROJECT_SOURCE_DIR}/src/lv2lint.c
    ${PROJECT_SOURCE_DIR}/src/lv2lint_plugin.c
    ${PROJECT_SOURCE_DIR}/src/lv2lint_port.c
    ${PROJECT_SOURCE_DIR}/src/lv2lint_parameter.c
    ${PROJECT_SOURCE_DIR}/src/lv2lint_ui.c
    ${PROJECT_SOURCE_DIR}/src/lv2lint_shm.c
    ${PROJECT_SOURCE_DIR}/Makefile
    ${PROJECT_SOURCE_DIR}/README.md
)

get_property(${PROJECT_NAME}_SOURCES TARGET ${PROJECT_NAME} PROPERTY SOURCES)
source_group(TREE ${PROJECT_SOURCE_DIR} FILES ${${PROJECT_NAME}_SOURCES})

target_compile_definitions(${PROJECT_NAME} PRIVATE LV2LINT_VERSION="${PROJECT_VERSION}")

target_include_directories(${PROJECT_NAME} PRIVATE $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}>)

target_include_directories(${PROJECT_NAME} SYSTEM PRIVATE ${LILV_INCLUDE_DIRS})

target_link_libraries(${PROJECT_NAME} PRIVATE lv2lint::mapper lv2lint::varchunk ${LILV_LINK_LIBRARIES})

install(TARGETS ${PROJECT_NAME}
    EXPORT ${PROJECT_NAME}Targets
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
    INCLUDES DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
)

install(EXPORT ${PROJECT_NAME}Targets
    FILE ${PROJECT_NAME}Targets.cmake
    NAMESPACE ${NAMESPACE_NAME}::
    DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/${PROJECT_NAME}
)

configure_package_config_file(
    ${PROJECT_SOURCE_DIR}/${PROJECT_NAME}Config.cmake.in
    ${PROJECT_BINARY_DIR}/${PROJECT_NAME}Config.cmake
    INSTALL_DESTINATION
    ${CMAKE_INSTALL_LIBDIR}/cmake/${PROJECT_NAME}
)

write_basic_package_version_file(
    ${PROJECT_BINARY_DIR}/${PROJECT_NAME}ConfigVersion.cmake
    VERSION ${PROJECT_VERSION}
    COMPATIBILITY SameMajorVersion
    ARCH_INDEPENDENT
)

install(FILES
    ${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}Config.cmake
    ${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}ConfigVersion.cmake
    DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/${PROJECT_NAME}
)

message("Make sure the LV2_PATH is correct. Use \nexport LV2_PATH=$HOME/Library/Audio/Plug-Ins/LV2:/Library/Audio/Plug-Ins/LV2:/opt/homebrew/lib/lv2")
