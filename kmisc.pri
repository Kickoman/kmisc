!isEmpty(KMISC_PRI_INCLUDED): error("kmisc.pri is already included")
KMISC_PRI_INCLUDED = 1

INCLUDEPATH += \
	$$PWD/common	\
	$$PWD/kfunction
