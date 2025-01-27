TARGET = ./none
LOADX = ./emu/loadx.emu
KERNELX = ./emu/kernelx.emu

LOADX_SRC = \
						./src/loadx/main.c

KERNELX_SRC = \
							./src/kernelx/main.c \
							./src/kernelx/clear.c \
							./src/kernelx/exit.c


$(TARGET):
		gcc $(LOADX_SRC) -o $(LOADX)
		gcc $(KERNELX) -o $(KERNELX)
