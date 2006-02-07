##
## $Id$
## iTerm Makefile
## 2003 Copyright(C) Ujwal S. Setlur
##

CONFIGURATION=Development
PROJECTNAME=iTerm

all:
	./iTermBuild.sh -alltargets -configuration $(CONFIGURATION)

clean:
	./iTermBuild.sh -alltargets clean
	rm -rf build
	rm -f *~

Development:
	./iTermBuild.sh -alltargets -configuration Development

Deployment:
	./iTermBuild.sh -alltargets -configuration Deployment


