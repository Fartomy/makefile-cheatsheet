compile_steps 			= sources/gcc_compile_steps.drawio
compile_steps_output 	= output/GCC\ İle\ Derleme\ Aşamaları.jpg
drawio_appimage			= ~/Applications/drawio.AppImage

all: $(compile_steps_output)

$(compile_steps_output): $(compile_steps)
	$(drawio_appimage) -x $(compile_steps) -o $(compile_steps_output)

clean:
	rm -rf $(compile_steps_output)

.PHONY: clean