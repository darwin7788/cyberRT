cmake_minimum_required(VERSION 3.14)
project(example CXX ASM)

set(CMAKE_EXPORT_COMPILE_COMMANDS on)
#第三方库

# add_library(cyber SHARED ${ALL_SRC})
# target_link_libraries(cyber ${PROTOBUF_LIBRARIES} fastrtps fastcdr glog::glog rt atomic uuid dl)

# add_subdirectory(cyber/examples)

# file(GLOB NART_PROTOS *.proto)
# PROTOBUF_GENERATE_CPP(PROTO_SRCS PROTO_HDRS ${NART_PROTOS})

# file(GLOB EXAMPLE_PROTO_FILES ${CMAKE_CURRENT_SOURCE_DIR}/proto/*.proto)
# foreach(PROTO_FILE ${EXAMPLE_PROTO_FILES})
# 	execute_process(
# 		COMMAND protoc --proto_path=${CMAKE_CURRENT_SOURCE_DIR} -I=${CMAKE_CURRENT_SOURCE_DIR}/proto
# 		 --cpp_out=${CMAKE_CURRENT_SOURCE_DIR} ${EXAMPLE_PROTO_FILES}
# 		)
# endforeach()

# message("------------" ${EXAMPLE_PROTO_FILES})

include_directories(./proto)

add_executable(listener 
	listener.cc
	proto/examples.pb.cc)
target_link_libraries(listener 
	cyber
	${PROTOBUF_LIBRARIES})


add_executable(talker 
	talker.cc
	proto/examples.pb.cc)
target_link_libraries(talker 
	cyber
	${PROTOBUF_LIBRARIES})
