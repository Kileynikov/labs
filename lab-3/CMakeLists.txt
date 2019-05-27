cmake_minimum_required(VERSION 2.8)

set(FOR_LOOP_SOURCES src/a.cpp src/for_main.cpp src/for_summ.cpp src/for_summ2.cpp src/for_print.cpp src/for_findFirstElement.cpp src/for_findFirstNegativeElement.cpp)
set(WHILE_LOOP_SOURCES src/a.cpp src/while_main.cpp src/while_summ.cpp src/while_summ2.cpp src/while_print.cpp src/while_findFirstElement.cpp src/while_findFirstNegativeElement.cpp)
set(DO_WHILE_LOOP_SOURCES src/a.cpp src/do_while_main.cpp src/do_while_summ.cpp src/do_while_summ2.cpp src/do_while_print.cpp src/do_while_findFirstElement.cpp src/do_while_findFirstNegativeElement.cpp)

add_executable(for_main ${FOR_LOOP_SOURCES})
add_executable(while_main ${WHILE_LOOP_SOURCES})
add_executable(do_while_main ${DO_WHILE_LOOP_SOURCES})
