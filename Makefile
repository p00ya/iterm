##
## $Id$
## JTerminal Makefile
## 2001 Copyright(C) Kiichi Kusama
##

PBXBUILD=pbxbuild
BUILDSTYLE=Development
PROJECTNAME=JTerminal

all:
	$(PBXBUILD) -buildstyle $(BUILDSTYLE)

clean:
	$(PBXBUILD) clean
	rm -rf build
	rm -f *~

