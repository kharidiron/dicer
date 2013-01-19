CC=gcc
CXX=g++
RM=rm -f
CPPFLAGS=
#-g $(shell root-config --cflags)
LDFLAGS=
#-g $(shell root-config --ldflags)
LDLIBS=
#$(shell root-config --libs)

APPNAME=roller
MAIN=Main.cc
SRCS=Main_OnInit.cc Main_OnLoop.cc CDice.cc
OBJS=$(subst .cc,.o,$(SRCS))

all: $(APPNAME)

$(APPNAME): $(OBJS)
	${CXX} $(LDFLAGS) -o $(APPNAME) $(MAIN) $(OBJS) $(LDLIBS)

depend: .depend

.depend: $(SRCS)
	$(RM) .depend
	$(CXX) $(CPPFLAGS) -MM $^>>./.depend;

clean:
	@$(RM) *.o

dist-clean: clean
	$(RM) *~ .depend $(APPNAME)

include .depend