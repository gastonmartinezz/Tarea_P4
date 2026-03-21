OPC = -g -Wall -std=c++11 -I. -I./.h
CXX = g++

# Directorio de fuentes (si los .cpp están en la misma carpeta que el Makefile, usa .)
SRC_DIR = ./.cpp

OBJ = build/main.o \
      build/DTFecha.o \
      build/DTExpe.o \
      build/Alojamiento.o \
      build/EventoCultural.o \
      build/Experiencia.o \
      build/TourGuiado.o \
      build/Turista.o

# Regla principal: Crea la carpeta build, compila los objetos y luego el ejecutable
output: prepare $(OBJ)
	$(CXX) $(OBJ) -o output

# Crea la carpeta build si no existe
prepare:
	mkdir -p build

valgrind: output
	valgrind --leak-check=full --track-origins=yes ./output

# Reglas de compilación
build/main.o: main.cpp
	$(CXX) $(OPC) -c main.cpp -o build/main.o

build/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(OPC) -c $< -o $@

clean:
	rm -rf build output
