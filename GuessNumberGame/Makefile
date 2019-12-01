CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		GuessNumberGame.o

LIBS =

TARGET =	GuessNumberGame

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
