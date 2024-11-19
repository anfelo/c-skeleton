APP_NAME = gut
BUILD_DIR = ./bin
C_FILES = ./src/*.c
CFLAGS = -Wall -g

APP_DEFINES:=
APP_INCLUDES:=

build:
	clang $(CFLAGS) $(C_FILES) -o $(BUILD_DIR)/$(APP_NAME) $(APP_INCLUDES)
