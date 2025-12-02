.PHONY: clean
clean:
	@echo "Cleaning all .exe files"
	find . -type f -name "*.exe" -delete
	@echo "Clean up complete"