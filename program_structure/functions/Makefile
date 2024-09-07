all: function_example void_function_example the_return_value_of_main

function_example: function_example.cpp
	g++ -std=c++0x function_example.cpp -o function_example

void_function_example: void_function_example.cpp
	g++ -std=c++0x void_function_example.cpp -o void_function_example

the_return_value_of_main: the_return_value_of_main.cpp
	g++ -std=c++0x the_return_value_of_main.cpp -o the_return_value_of_main

clean:
	rm function_example void_function_example the_return_value_of_main
