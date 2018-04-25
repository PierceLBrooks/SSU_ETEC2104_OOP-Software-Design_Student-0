set(INC ${PROJECT_SOURCE_DIR}/include)
set(SRC ${PROJECT_SOURCE_DIR}/src)

include_directories(${INC})

set(PROJECT_FILES
	${SRC}/main.cpp
	${SRC}/Foo.cpp
	${INC}/Foo.hpp
	${INC}/You.hpp
)

add_executable(myBranch ${PROJECT_FILES})

set_property(TARGET myBranch PROPERTY CXX_STANDARD 14)
set_property(TARGET myBranch PROPERTY CXX_STANDARD_REQUIRED ON)