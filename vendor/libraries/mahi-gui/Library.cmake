include(FetchContent)
FetchContent_Declare(mahi-gui GIT_REPOSITORY https://github.com/mahilab/mahi-gui.git)
FetchContent_MakeAvailable(mahi-gui)

include_directories(${mahi-gui_SOURCE_DIR})
dune_add_lib(mahi::gui)