SRC += prime_uni.c \
  	tap-hold.c \
  	macros.c

UNICODE_ENABLE = yes
TAP_DANCE_ENABLE = yes

ifeq ($(strip $(TAP_DANCE_ENABLE)), yes)
  SRC += tap-dance.c
endif