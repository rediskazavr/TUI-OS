TARGET = ./none
LOADX = ./emu/loadx.emu

LOADX_SRC = \
						./src/loadx/main.c 

$(TARGET):
		gcc $(LOADX_SRC) -o $(LOADX)
