
all: build

clean:
	rm -f rogue rogue.6 rogue.me rogue.cat rogue.html rogue.doc rogue.scr

distclean: clean
	make -C rogue_src distclean

autoreconf:
	( \
		cd rogue_src; \
		./bootstrap; \
	)

build:
	( \
		cd rogue_src; \
		./configure; \
		make;\
		if [ $$? -eq 0 ]; then \
			mv -t .. rogue rogue.6 rogue.cat rogue.doc rogue.html rogue.me; \
			make clean; \
			echo ""; \
			echo "Build complete. Executable created:"; \
			realpath ../rogue; \
		fi \
	)
