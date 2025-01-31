TARGET = ./none
LOADX = ./emu/loadx.emu
KERNELX = ./emu/kernelx.emu

LOADX_SRC = \
						./src/loadx/main.c \
						./src/loadx/ranim/ranim.c

KERNELX_SRC = \
							./src/kernelx/main.c \
							./src/kernelx/clear.c \
							./src/kernelx/exit.c \
							./src/kernelx/sys.c


$(TARGET):
		gcc $(LOADX_SRC) -o $(LOADX) -lm
		gcc $(KERNELX) -o $(KERNELX)
