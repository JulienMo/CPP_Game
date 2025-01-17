cmake_minimum_required(VERSION 3.16)

project(CPP_Game_LoupGarou VERSION 1.0 LANGUAGES CXX)

# Ajout du suport C++20
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(./include)

add_library(src SHARED
	./src/Chasseur.cpp
	./src/Cupidon.cpp
	./src/Game.cpp
	./src/LoupGarou.cpp
	./src/Player.cpp
	./src/Sorciere.cpp
	./src/Villageois.cpp
	./src/Voyante.cpp
)

add_executable(${PROJECT_NAME} ./app/main.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE src)