#############################################################################
# Makefile for building: Subdomain
# Generated by qmake (2.01a) (Qt 4.4.0) on: Wed Jan 30 19:31:30 2019
# Project:  Subdomain.pro
# Template: app
# Command: d:\nckh\qt\440\bin\qmake.exe -spec ..\QT\440\mkspecs\win32-g++ -win32 -o Makefile Subdomain.pro
#############################################################################

first: release
install: release-install
uninstall: release-uninstall
MAKEFILE      = Makefile
QMAKE         = d:\nckh\qt\440\bin\qmake.exe
DEL_FILE      = del
CHK_DIR_EXISTS= if not exist
MKDIR         = mkdir
COPY          = copy /y
COPY_FILE     = $(COPY)
COPY_DIR      = xcopy /s /q /y /i
INSTALL_FILE  = $(COPY_FILE)
INSTALL_PROGRAM = $(COPY_FILE)
INSTALL_DIR   = $(COPY_DIR)
DEL_FILE      = del
SYMLINK       = 
DEL_DIR       = rmdir
MOVE          = move
CHK_DIR_EXISTS= if not exist
MKDIR         = mkdir
SUBTARGETS    =  \
		release \
		debug

release: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release
release-make_default: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release 
release-make_first: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release first
release-all: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release all
release-clean: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release clean
release-distclean: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release distclean
release-install: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release install
release-uninstall: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release uninstall
debug: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug
debug-make_default: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug 
debug-make_first: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug first
debug-all: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug all
debug-clean: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug clean
debug-distclean: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug distclean
debug-install: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug install
debug-uninstall: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug uninstall

Makefile: Subdomain.pro  ../QT/440/mkspecs/win32-g++/qmake.conf ../QT/440/mkspecs/qconfig.pri \
		../QT/440/mkspecs/features/qt_functions.prf \
		../QT/440/mkspecs/features/qt_config.prf \
		../QT/440/mkspecs/features/exclusive_builds.prf \
		../QT/440/mkspecs/features/default_pre.prf \
		../QT/440/mkspecs/features/win32/default_pre.prf \
		../QT/440/mkspecs/features/release.prf \
		../QT/440/mkspecs/features/debug_and_release.prf \
		../QT/440/mkspecs/features/default_post.prf \
		../QT/440/mkspecs/features/win32/rtti.prf \
		../QT/440/mkspecs/features/win32/exceptions.prf \
		../QT/440/mkspecs/features/win32/stl.prf \
		../QT/440/mkspecs/features/shared.prf \
		../QT/440/mkspecs/features/warn_on.prf \
		../QT/440/mkspecs/features/qt.prf \
		../QT/440/mkspecs/features/win32/thread.prf \
		../QT/440/mkspecs/features/moc.prf \
		../QT/440/mkspecs/features/win32/windows.prf \
		../QT/440/mkspecs/features/resources.prf \
		../QT/440/mkspecs/features/uic.prf \
		../QT/440/mkspecs/features/yacc.prf \
		../QT/440/mkspecs/features/lex.prf \
		d:/NCKH/QT/440/lib/qtmain.prl
	$(QMAKE) -spec ..\QT\440\mkspecs\win32-g++ -win32 -o Makefile Subdomain.pro
..\QT\440\mkspecs\qconfig.pri:
..\QT\440\mkspecs\features\qt_functions.prf:
..\QT\440\mkspecs\features\qt_config.prf:
..\QT\440\mkspecs\features\exclusive_builds.prf:
..\QT\440\mkspecs\features\default_pre.prf:
..\QT\440\mkspecs\features\win32\default_pre.prf:
..\QT\440\mkspecs\features\release.prf:
..\QT\440\mkspecs\features\debug_and_release.prf:
..\QT\440\mkspecs\features\default_post.prf:
..\QT\440\mkspecs\features\win32\rtti.prf:
..\QT\440\mkspecs\features\win32\exceptions.prf:
..\QT\440\mkspecs\features\win32\stl.prf:
..\QT\440\mkspecs\features\shared.prf:
..\QT\440\mkspecs\features\warn_on.prf:
..\QT\440\mkspecs\features\qt.prf:
..\QT\440\mkspecs\features\win32\thread.prf:
..\QT\440\mkspecs\features\moc.prf:
..\QT\440\mkspecs\features\win32\windows.prf:
..\QT\440\mkspecs\features\resources.prf:
..\QT\440\mkspecs\features\uic.prf:
..\QT\440\mkspecs\features\yacc.prf:
..\QT\440\mkspecs\features\lex.prf:
d:\NCKH\QT\440\lib\qtmain.prl:
qmake: qmake_all FORCE
	@$(QMAKE) -spec ..\QT\440\mkspecs\win32-g++ -win32 -o Makefile Subdomain.pro

qmake_all: FORCE

make_default: release-make_default debug-make_default FORCE
make_first: release-make_first debug-make_first FORCE
all: release-all debug-all FORCE
clean: release-clean debug-clean FORCE
distclean: release-distclean debug-distclean FORCE
	-$(DEL_FILE) Makefile

release-mocclean: $(MAKEFILE).Release
	$(MAKE) -f $(MAKEFILE).Release mocclean
debug-mocclean: $(MAKEFILE).Debug
	$(MAKE) -f $(MAKEFILE).Debug mocclean
mocclean: release-mocclean debug-mocclean

release-mocables: $(MAKEFILE).Release
	$(MAKE) -f $(MAKEFILE).Release mocables
debug-mocables: $(MAKEFILE).Debug
	$(MAKE) -f $(MAKEFILE).Debug mocables
mocables: release-mocables debug-mocables
FORCE:

$(MAKEFILE).Release: Makefile
$(MAKEFILE).Debug: Makefile
