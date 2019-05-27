cmake_minimum_required(VERSION 3.8)

add_executable(task1 src/task1.c)
add_executable(task2 src/task2.c)
add_executable(task3 src/task3.c)
add_executable(task4 src/task4.c)
add_executable(task5 src/task5_main.c src/task5_func.c)
#add_executable(task6 src/task6_main.c src/task6_func.c)
add_executable(task7 src/task7_main.c src/task7_func.c)
add_executable(task8 src/task7_main.c)

add_library(task8_lib STATIC src/task7_func.c)

target_link_libraries(task8 task8_lib)