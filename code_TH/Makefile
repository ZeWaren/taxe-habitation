C := gcc

CFLAGS := -Wall -Werror -DILIAD -I .
LDFLAGS := -lm

SRCS := th-7karc.c \
	th-7kbnc.c \
	th-7kcac.c \
	th-7kcoc.c \
	th-7kcvc.c \
	th-7kdec.c \
	th-7kdnc.c \
	th-7krac.c \
	th-7krec.c \
	th-7ksec.c \
	th-7ksfc.c \
	th-7ktac.c \
	th-7ktvc.c \
	th-7kvlc.c

PROG_zwm_tests = zwm_tests
PROG_zwm_tests_SRCS = zwm_tests.c th-7karc.c th-7krac.c signature.c

OBJS := ${SRCS:.c=.o} 
PROG_zwm_tests_OBJS := ${PROG_zwm_tests_SRCS:.c=.o} 

all: ${PROG_zwm_tests}

${PROG_zwm_tests}: ${PROG_zwm_tests_OBJS}
	${CC} ${PROG_zwm_tests_OBJS} -o ${PROG_zwm_tests} ${LDFLAGS}

clean:
	rm -f ${PROG_zwm_tests} ${OBJS} ${PROG_zwm_tests_OBJS}

.c.o:
	${CC} ${CFLAGS} -c $<
