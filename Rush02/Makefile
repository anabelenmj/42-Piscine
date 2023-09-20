EXE = rush-02
CC = cc
SRCDIR = src
OBJDIR = obj
SRC = $(wildcard $(SRCDIR)/*.c)
OBJS = $(SRC:.c=.o)
OBJ = $(patsubst $(SRCDIR)/%, $(OBJDIR)/%, $(OBJS))
CFLAGS = -Wall -Wextra -Werror

all: prep $(EXE)

$(EXE): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(CC) -c -o $@ $< $(CFLAGS)

.PHONY: prep clean fclean

prep:
	@mkdir -p $(OBJDIR)

clean:
	rm -f $(OBJDIR)/*.o

fclean: clean
	rm -f $(EXE)
