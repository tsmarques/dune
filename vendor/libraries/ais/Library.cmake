file(GLOB DUNE_AIS_FILES
  vendor/libraries/ais/*.cpp)
set_source_files_properties(${DUNE_AIS_FILES}
  PROPERTIES COMPILE_FLAGS "${DUNE_CXX_FLAGS} ${DUNE_CXX_FLAGS_STRICT}")
  
#list(APPEND DUNE_VENDOR_FILES ${DUNE_AIS_FILES})