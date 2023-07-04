# Variable definitions
PDF_DIR := pdf
TEX_DIR := tex
BIB_DIR := bib
BASE_DIR := base

DOCUMENT_DEFAULT_NAME := document
DOCUMENT_NAME := tesis

MAIN_TEX := $(BASE_DIR)/$(DOCUMENT_DEFAULT_NAME).tex
OUTPUT_PDF := $(PDF_DIR)/$(DOCUMENT_NAME).pdf

# Clean targets
clean:
	rm -f $(OUTPUT_PDF)
	rm -f $(DOCUMENT_DEFAULT_NAME).*
	rm -f $(TEX_DIR)/*.aux

# Build target
all: $(OUTPUT_PDF)

# Main target to build the PDF
$(OUTPUT_PDF): $(MAIN_TEX) $(TEX_DIR)/*.tex $(BIB_DIR)/bibliography.bib
	pdflatex $(MAIN_TEX)
	bibtex $(DOCUMENT_DEFAULT_NAME)
	pdflatex $(MAIN_TEX)
	pdflatex $(MAIN_TEX)
	mv $(DOCUMENT_DEFAULT_NAME).pdf $(OUTPUT_PDF)

# Clean up temporary files
clean-build:
	rm -f $(DOCUMENT_DEFAULT_NAME).*
	rm -f $(TEX_DIR)/*.aux

# Phony targets
.PHONY: clean all clean-build
