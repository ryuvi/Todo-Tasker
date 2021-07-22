TARGET=todo

CXX=g++
LD=g++

OBJS=main.cpp

todo:$(OBJS)
	$(LD) -o $(TARGET) $(OBJS)

install:
	@install todo /usr/local/bin/todo

clean:
	rm -rf *.o
