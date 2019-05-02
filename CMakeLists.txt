cmake_minimum_required(VERSION 3.14)
project(Qt_Cards)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_PREFIX_PATH "PATH_TO_QT/QT_VERSION/QT_ARCH/lib/cmake")

find_package(Qt5Core REQUIRED)
find_package(Qt5Widgets REQUIRED)
find_package(Qt5Quick REQUIRED)

add_executable(Qt_Cards card.cpp card.h cards_export.h card_pics.h main.cpp carddeck.cpp carddeck.h cardhand.cpp cardhand.h)

target_link_libraries(Qt_Cards Qt5::Core)
target_link_libraries(Qt_Cards Qt5::Widgets)
target_link_libraries(Qt_Cards Qt5::Quick)