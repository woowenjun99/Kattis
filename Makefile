test:
	python3 main.py < in.txt

build:
	python3 build.py

environment:
	python3 -m venv venv

activate:
	. venv/bin/activate