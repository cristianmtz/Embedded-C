include sources.mk

CFLAGS = -Wall -Werror -g -std=c99 -O0
CC = gcc
TARGET = stats

.PHONY: build 
build: all

.PHONY: all
all: $(TARGET).out

OBJS = $(SRCS:.c=.o)

%.o : %.c
	$(CC) -c $< $(CFLAGS) -o $@


$(TARGET).out: $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) $(LDFLAGS) -o $@



.PHONY: clean
clean:
	rm -f $(OBJS) $(TARGET).out $(TARGET).map 	


