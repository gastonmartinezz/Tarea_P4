OPC = -g -Wall -lstdc++ -std=c++11

output: main.o DTFecha.o DTExpe.o alojamiento.o eventoCultural.o experiencia.o tourGuiado.o turista.o
	g++ main.o DTFecha.o DTExpe.o alojamiento.o eventoCultural.o experiencia.o tourGuiado.o turista.o -o output

main.o: main.cpp DTFecha.h DTExpe.h alojamiento.h eventoCultural.h experiencia.h tipoRegimen.h tourGuiado.h turista.h
	g++ $(OPC) -c main.cpp

DTFecha.o: DTFecha.cpp DTFecha.h
	g++ $(OPC) -c DTFecha.cpp

DTIExpe.o: DTExpe.cpp DTExpe.h
	g++ $(OPC) -c DTExpe.cpp

alojamiento.o: Alojamiento.cpp alojamiento.h experiencia.h
	g++ $(OPC) -c Alojamiento.cpp

eventoCultural.o: EventoCultural.cpp eventoCultural.h alojamiento.h
	g++ $(OPC) -c EventoCultural.cpp

experiencia.o: Experiencia.cpp experiencia.h
	g++ $(OPC) -c Experiencia.cpp

tourGuiado.o: TourGuiado.cpp tourGuiado.h experiencia.h
	g++ $(OPC) -c TourGuiado.cpp

turista.o: Turista.cpp turista.h
	g++ $(OPC) -c Turista.cpp

clean:
	rm *.o output