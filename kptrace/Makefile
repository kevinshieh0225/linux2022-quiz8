TARGET_MODULE := dont_trace

obj-m += $(TARGET_MODULE).o

KERNELDIR ?= /lib/modules/`uname -r`/build
PWD := $(shell pwd)

all:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules

clean:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) clean

load:
	sudo insmod $(TARGET_MODULE).ko

unload:
	sudo rmmod $(TARGET_MODULE) || true > /dev/null