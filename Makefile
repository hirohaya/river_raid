CC=gcc
CFLAGS=-c -ansi -pedantic -O2 -Wall
LDFLAGS=
SOURCES= main.c tiro.c cenario.c nave.c defesa.c aleatorio.c game.c
OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=river_raid

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@
	
.c.o:
	$(CC) $(CFLAGS) $< -o $@
	
clean:          
	rm -f *o river_raid
