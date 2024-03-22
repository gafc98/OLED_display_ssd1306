ssd1306_test: main.cpp
	g++ -fdiagnostics-color=always -g main.cpp -Ofast -fconcepts-ts -std=c++17 -o test

clean:
	rm test