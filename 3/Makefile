PROJECT_ROOT = $(dir $(abspath $(lastword $(MAKEFILE_LIST))))

OBJS = main.o ex3.o

ifeq ($(BUILD_MODE),debug)
	CFLAGS += -g -std=c++17
else ifeq ($(BUILD_MODE),run)
	CFLAGS += -O2 -std=c++17
else
	$(error Build mode $(BUILD_MODE) not supported by this Makefile)
endif

all:	ex3

ex3:	$(OBJS)
	$(CXX) -o $@ $^

%.o:	$(PROJECT_ROOT)%.cpp
	$(CXX) -c $(CFLAGS) $(CXXFLAGS) $(CPPFLAGS) -o $@ $<

%.o:	$(PROJECT_ROOT)%.c
	$(CC) -c $(CFLAGS) $(CPPFLAGS) -o $@ $<

clean:
	rm -fr barclays-cpp $(OBJS)
