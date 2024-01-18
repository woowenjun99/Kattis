build:
	python3 build.py

environment:
	python3 -m venv venv

test:
	python3 main.py < in.txt
	
cpp:
	g++ -std=c++17 -Wall -O2 main.cpp -o main