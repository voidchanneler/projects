project (planetarium)


include_directories( 
    ${CMAKE_SOURCE_DIR}/objects/inc 

)


add_executable(planetarium main.cpp "objects/src/celestialObject.cpp" "objects/inc/celestialObject.h"  "objects/inc/planet.h" "objects/inc/star.h" "objects/src/star.cpp" "objects/src/planet.cpp")