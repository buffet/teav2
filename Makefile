CXX = g++
CXXFLAGS = -std=c++17 -O2 -Wall -Wextra -pedantic -Wshadow

CPPFLAGS = -MMD -MF $*.d
LDLIBS = 
OBJS= teav2.o

all: teav2

-include *.d

teav2: $(OBJS)

%.d: ;

%.o: %.d

clean:
	@$(RM) -v $(OBJS) $(OBJS:.o=.d) teav2

.PHONY: all clean
.PRECIOUS: *.d *.o
    
