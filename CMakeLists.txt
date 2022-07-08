project("protobuf_tryout")
find_package(Protobuf REQUIRED)
cmake_minimum_required(VERSION 3.22)

protobuf_generate_cpp(proto_src proto_header images.proto)
add_executable( main
    ./main.cc
        ${proto_src}
        ${proto_header}
        )

target_include_directories(
    main
        PUBLIC
        include/
        ${Protobuf_INCLUDE_DIRS}
)

target_link_libraries(main PUBLIC ${Protobuf_LIBRARIES})


