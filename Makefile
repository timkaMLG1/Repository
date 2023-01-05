build: create_dir
	cd ./build && CMAKE_GENERATOR=Ninja cmake -DCMAKE_TOOLCHAIN_FILE=../windows.cmake .. && ninja

create_dir:
	mkdir -p ./build

clean:
	rm -rf ./build