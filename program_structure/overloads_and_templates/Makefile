all: overloaded_functions function_templates function_templates01 non_type_template_arguments

overloaded_functions: overloaded_functions.cpp
	g++ -std=c++0x overloaded_functions.cpp -o overloaded_functions

function_templates: function_templates.cpp
	g++ -std=c++0x function_templates.cpp -o function_templates

function_templates01: function_templates01.cpp
	g++ -std=c++0x function_templates01.cpp -o function_templates01

non_type_template_arguments: non_type_template_arguments.cpp
	g++ -std=c++0x non_type_template_arguments.cpp -o non_type_template_arguments

clean:
	rm overloaded_functions function_templates function_templates01 non_type_template_arguments
