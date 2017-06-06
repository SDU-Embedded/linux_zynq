export ARCH:=arm
export CROSS_COMPILE:=arm-xilinx-linux-gnueabi-

CC=$(CROSS_COMPILE)gcc

obj-m += simple.o

KDIR  := path/to/linux-xlnx-zynmp-dt-fixes-for-4.10
PWD		:= $(shell pwd)

default:
	${MAKE} -C ${KDIR} -I ${KDIR}/include M=${PWD} modules

clean:
	rm -rf *.o *.mod.* *.symvers *.order *~ *.cmd .tmp*