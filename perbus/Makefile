# base
MSPBASE=/cygdrive/c/ti/msp430_gcc/bin
# configuration
MSPCC=${MSPBASE}/msp430-elf-gcc
MSPCCFLAGS=-Wall -Os -fdata-sections -ffunction-sections -mmcu=msp430c1111 
MSPOBJCOPY=${MSPBASE}/msp430-elf-objcopy
MSPOBJDUMP=${MSPBASE}/msp430-elf-objdump
MSPSIZE=${MSPBASE}/msp430-elf-size

all:
	@echo "Targets: "
	@echo "  compile    Compile software packages"
	@echo "  clean      Remove intermediate files"

compile: main.o

main.o: main.c
	$(MSPCC) -IC:/ti/msp430_gcc/bin/../include -I../hal $(MSPCCFLAGS) -c $< -o $@ 
	$(MSPSIZE) $@
	${MSPOBJDUMP} -dSt main.o >main.lst

clean:
	rm -rf main.o main.lst *~

