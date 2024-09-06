all: typed_constant_expressions preprocessor_definitions


typed_constant_expressions: typed_constant_expressions.cpp
	g++ -std=c++0x typed_constant_expressions.cpp -o typed_constant_expressions

preprocessor_definitions: preprocessor_definitions.cpp
	g++ -std=c++0x preprocessor_definitions.cpp -o preprocessor_definitions

clean:
	rm typed_constant_expressions preprocessor_definitions
