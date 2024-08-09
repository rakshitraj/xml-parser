.DEFAULT_GOAL := build


.SILENT: build
.PHONY: build
build: src/
	echo "build: Creating target ..."
	if [ ! -d "build" ]; then \
		mkdir build; \
	fi 
	g++ src/parser.cpp -o build/parser.exe


.SILENT: run
.PHONY: run
run: build
	build/parser.exe


.PHONY: clean
clean:
	rm -rf build