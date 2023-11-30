#******************************************************************************
# Copyright (C) 2017 by Alex Fosdick - University of Colorado
#
# Redistribution, modification or use of this software in source or binary
# forms is permitted as long as the files maintain this copyright. Users are 
# permitted to modify this and use it to learn about the field of embedded
# software. Alex Fosdick and the University of Colorado are not liable for any
# misuse of this material. 
#
#*****************************************************************************

#------------------------------------------------------------------------------
# <Put a Description Here>
#
# Use: make [TARGET] [PLATFORM-OVERRIDES]
#
# Build Targets:
#      <Put a description of the supported targets here>
#
# Platform Overrides:
#      <Put a description of the supported Overrides here
#
#------------------------------------------------------------------------------
include sources.mk

# Platform Overrides

TARGET = c1m2


# Conditional statements make 
ifeq ($(PLATFORM), HOST)
	CC = gcc
	LD = ld
	CFLAGs = -Wall Werror - g -O0 -std=c99
	CPPFLAGs = -DHOST
	LDFLAGs = -Wl, -Map=$(TARGET).map
	
else	
	LINKER_FILE = ../msp432p401r.lds
	CPU = cortex-m4
	SPECS =	nosys.specs
	CC = arm-none-eabi-gcc
	LD = arm-none-eabi-ld
 	CFLAGS = -Wall -Werror -g -O0 -std=c99 -mcpu=$(CPU) -mthumb --specs=$(SPECS) -mfpu=fpv4-sp-d16 -mfloat-abi=hard 	  			march=armv7e-m 
	LDFLAGS = -Wl,-Map=$(TARGET).map -T $(LINKER_FILE)
	CPPFLAGs = -D$(PLATFORM)
endif



OBJS = $(SRCS:.c=.o)

%.o : %.c
	$(CC) -c $(INCLUDES) $(CFLAGS) $(CPPFLAGs) $<

%.i : %.c
	$(CC) -E $(INCLUDES) $(CFLAGS) $(CPPFLAGs) $< -o $@


%.asm : %.c
	$(CC) -S $(INCLUDES) $(CFLAGS) $(CPPFLAGs) $< -o $@


.PHONY: all
all: $(TARGET).out

$(TARGET).out: $(OBJS)
	$(CC) $(OBJS) $(INCLUDES) $(CFLAGS) $(CPPFLAGS) $(LDFLAGS) -o $@



.PHONY: build
build: $(TARGET).out

.PHONY: compile-all
compile-all: $(OBJS)

.PHONY: clean
clean:
	rm -f *.o *.i *.asm $(TARGET).out $(TARGET).map
	





	



