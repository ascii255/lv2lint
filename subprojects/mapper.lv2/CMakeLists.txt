cmake_minimum_required(VERSION 3.21)

project(mapper
    VERSION 1.0.0
    DESCRIPTION "Concurrent lock-free implementation of the LV2 URID extension"
    HOMEPAGE_URL https://github.com/ascii255/lv2lint/subprojects/mapper.lv2
    LANGUAGES C
)

find_package(PkgConfig REQUIRED)

pkg_check_modules(LV2 REQUIRED lv2)

add_library(${PROJECT_NAME})
add_library(${NAMESPACE_NAME}::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_target_properties(${PROJECT_NAME} PROPERTIES
    C_STANDARD_REQUIRED YES
    LINKER_LANGUAGE C
)

target_compile_features(${PROJECT_NAME} PUBLIC c_std_23)

target_sources(${PROJECT_NAME} PRIVATE
    ${PROJECT_SOURCE_DIR}/mapper.lv2/mapper.h
    ${PROJECT_SOURCE_DIR}/src/mapper.c
    ${PROJECT_SOURCE_DIR}/src/mapper_private.h
    ${PROJECT_SOURCE_DIR}/src/mum.h
)

get_property(${PROJECT_NAME}_SOURCES TARGET ${PROJECT_NAME} PROPERTY SOURCES)
source_group(TREE ${PROJECT_SOURCE_DIR} FILES ${${PROJECT_NAME}_SOURCES})

target_include_directories(${PROJECT_NAME} PUBLIC $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}>)

target_include_directories(${PROJECT_NAME} SYSTEM PRIVATE ${LV2_INCLUDE_DIRS})

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
