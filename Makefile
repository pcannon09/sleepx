INCS = 
OBJS = main.o sleepx.o
EXE = main

SRCDIR = src
INCDIR = include
TESTDIR = test
OBJDIR = obj
EXTENSIONSDIR = $(SRCDIR)/extensions
CPPVERSION = 11

CXXFLAGS = -Wall -Wextra -Wconversion -g -MMD -MP -pthread -std=c++$(CPPVERSION)
INCLUDES = -I$(INCDIR)

LIBS = 

_INCS = $(patsubst %,$(INCDIR)/%,$(INCS))
_OBJS = $(patsubst %,$(OBJDIR)/%,$(OBJS))

$(OBJDIR)/%.o: $(TESTDIR)/%.cpp $(_INCS)
	@echo "Compiling $@ from $<..."
	$(CXX) -c -o $@ $< $(CXXFLAGS) $(INCLUDES)
	@echo

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp $(_INCS)
	@echo "Compiling $@ from $<..."
	$(CXX) -c -o $@ $< $(CXXFLAGS) $(INCLUDES)
	@echo

$(EXE): $(_OBJS_CONIO) $(_OBJS)
	@echo "Compiling... "
	@echo "Linking $@ from $^..."
	$(CXX) -o $@ $^ $(CXXFLAGS) $(LIBS)

	@echo
	@echo

.PHONY: clean

all: $(EXE)

create:
	@echo "Creating dir 'obj'"
	@mkdir obj
	@echo "Done!"

clean:
	@echo "Cleaning..."
	
	@rm -f $(OBJDIR)/*
	@rm -f $(EXE)

	@echo "Done."

show_obj:
	@echo "Finding..."
	@ls obj
	@echo "Done!"

reset: clean $(EXE)

