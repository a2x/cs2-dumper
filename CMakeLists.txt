cmake_minimum_required(VERSION 3.26)

project(cs2-schema-dumper)

set(CMAKE_CXX_STANDARD 20)

add_compile_definitions(WIN32_LEAN_AND_MEAN)

add_subdirectory(vendor)

add_executable(${PROJECT_NAME}
    src/main.cpp
    src/process.cpp
    src/sdk/c_schema_class_field_data.cpp
    src/sdk/c_schema_class_info.cpp
    src/sdk/c_schema_system.cpp
    src/sdk/c_schema_system_type_scope.cpp
    src/sdk/c_schema_type_declared_class.cpp
    src/utility/murmur_hash.cpp
)

target_link_libraries(${PROJECT_NAME} nlohmann_json::nlohmann_json spdlog::spdlog)

target_include_directories(${PROJECT_NAME} PRIVATE include vendor/nlohmann_json/single_include vendor/spdlog/include)
