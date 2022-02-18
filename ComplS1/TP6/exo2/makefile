#Makefile
#Parametragedu compilateur et des options de compilations des modules
COMP = gcc
#Linux : COMP =cc
OPTIONS = -c
OPTIONS_ANSI = -ansi -std=c90
#Linux : OPTIONS_ANSI = -ansi
OPTIONS_BIB = -lm

#Parametrage de l'executable et de la liste des objets qui le composent
EXECUTABLE = fraction
OBJETS = ioFraction.o calculFraction.o 

#Description des cibles
${EXECUTABLE} : ${OBJETS}
	${COMP} ${OPTIONS_ANSI} -o ${EXECUTABLE} ${OBJETS}

ioFraction.o : ioFraction.c ioFraction.h
	${COMP} ${OPTIONS_ANSI} ${OPTIONS} ioFraction.c

calculFraction.o : calculFraction.c calculFraction.h
	${COMP} ${OPTIONS_ANSI} ${OPTIONS} calculFraction.c

