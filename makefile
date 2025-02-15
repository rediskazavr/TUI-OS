TARGET = ./none
LOADX = ./emu/loadx.emu
KERNELX = ./emu/kernelx.emu
CALC = ./emu/bin/calc.emu
GRPHX = ./emu/bin/grphx.emu

LOADX_SRC = \
						./src/loadx/main.c \
						./src/loadx/ranim/ranim.c

KERNELX_SRC = \
							./src/kernelx/main.c \
							./src/kernelx/clear.c \
							./src/kernelx/exit.c \
							./src/kernelx/sys.c \
							./src/kernelx/program.c
GRPHX_SRC = \
						./src/grphx/main.rs

CALC_SRC = \
					./src/calc/main.c

$(TARGET):
		gcc $(LOADX_SRC) -o $(LOADX) -lm
		gcc $(KERNELX_SRC) -o $(KERNELX)
		rustc $(GRPHX_SRC) -o $(GRPHX)
		gcc $(CALC_SRC) -o $(CALC)
