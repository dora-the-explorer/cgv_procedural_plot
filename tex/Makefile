# Paths
MAIN_NAME = main
BUILD_DIR = build

# Tools
TEX = pdflatex -output-directory $(BUILD_DIR)
BIBTEX = biber
READER = evince

# General
RM = rm -rf
MKDIR = mkdir -p

.DEFAULT_GOAL := all
all: dir build/$(MAIN_NAME).pdf

dir:
	$(MKDIR) $(BUILD_DIR)

build/$(MAIN_NAME).pdf: *.tex */*tex
	$(TEX) $(MAIN_NAME) && $(BIBTEX) $(BUILD_DIR)/$(MAIN_NAME) && $(TEX) $(MAIN_NAME) && $(TEX) $(MAIN_NAME) && $(READER) $(BUILD_DIR)/$(MAIN_NAME).pdf

clean:
	$(RM) $(BUILD_DIR)
