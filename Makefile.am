AUTOMAKE_OPTIONS = foreign

if LIBMP_HACK
SUBDIRS = libsrp libkrypto base
else
SUBDIRS = libsrp libkrypto base
endif

DIST_SUBDIRS = libsrp libkrypto base

EXTRA_DIST = README README.NIS README.WIN32 INSTALL CHANGES

dist-hook:
	tar cf - docs | (cd $(distdir); tar xpf -)
	tar cf - java | (cd $(distdir); tar xpf -)
	tar cf - javascript | (cd $(distdir); tar xpf -)
	tar cf - inst | (cd $(distdir); tar xpf -)
	tar cf - cast | (cd $(distdir); tar xpf -)
	tar cf - win32 | (cd $(distdir); tar xpf -)
	find $(distdir) -type d -name CVS -print | xargs rm -r
