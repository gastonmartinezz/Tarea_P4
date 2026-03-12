OPC = -g -Wall -std=c++11 -I.h
CXX = g++

SRC_DIR = .cpp

OBJ = build/main.o \
      build/DTFecha.o \
      build/DTExpe.o \
      build/Alojamiento.o \
      build/EventoCultural.o \
      build/Experiencia.o \
      build/TourGuiado.o \
      build/Turista.o

output: $(OBJ)
	$(CXX) $(OBJ) -o output

build/main.o: main.cpp
	$(CXX) $(OPC) -c main.cpp -o build/main.o

build/DTFecha.o: $(SRC_DIR)/DTFecha.cpp
	$(CXX) $(OPC) -c $(SRC_DIR)/DTFecha.cpp -o build/DTFecha.o

build/DTExpe.o: $(SRC_DIR)/DTExpe.cpp
	$(CXX) $(OPC) -c $(SRC_DIR)/DTExpe.cpp -o build/DTExpe.o

build/Alojamiento.o: $(SRC_DIR)/Alojamiento.cpp
	$(CXX) $(OPC) -c $(SRC_DIR)/Alojamiento.cpp -o build/Alojamiento.o

build/EventoCultural.o: $(SRC_DIR)/EventoCultural.cpp
	$(CXX) $(OPC) -c $(SRC_DIR)/EventoCultural.cpp -o build/EventoCultural.o

build/Experiencia.o: $(SRC_DIR)/Experiencia.cpp
	$(CXX) $(OPC) -c $(SRC_DIR)/Experiencia.cpp -o build/Experiencia.o

build/TourGuiado.o: $(SRC_DIR)/TourGuiado.cpp
	$(CXX) $(OPC) -c $(SRC_DIR)/TourGuiado.cpp -o build/TourGuiado.o

build/Turista.o: $(SRC_DIR)/Turista.cpp
	$(CXX) $(OPC) -c $(SRC_DIR)/Turista.cpp -o build/Turista.o

clean:
	rm -f build/*.o output