CXX = g++
CXXFLAGS = -Wall # -ggdb
LDFLAGS =
INCLUDES =
EXEC_NAME = exo2
SRC = $(wildcard *.cpp)
OBJ = $(SRC:.cpp=.o)

all : $(EXEC_NAME)

$(EXEC_NAME) : $(OBJ)
	$(CXX) -o $(EXEC_NAME) $^ $(LDFLAGS)

%.o : %.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) -o $@ -c $<


.PHONY : clean run

clean :
	rm $(EXEC_NAME) *.o

run : $(EXEC_NAME)
	./$(EXEC_NAME)
