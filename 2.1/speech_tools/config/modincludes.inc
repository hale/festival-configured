 ###########################################################################
 ## This file is created automatically from your config file.
 ## Do not hand edit.
 ## Created:Thu 19 Sep 2013 12:57:55 BST
 ###########################################################################

MOD_DESC_NATIVE_AUDIO=Native audio module for your system
INCLUDE_NATIVE_AUDIO=1
include $(TOP)/config/modules/EDITLINE.mak
include $(TOP)/SIOD/SIOD.mak
include $(TOP)/stats/wagon/wagon.mak
include $(TOP)/grammar/scfg/scfg.mak
include $(TOP)/grammar/wfst/wfst.mak
include $(TOP)/stats/ols.mak
include $(TOP)/RXP/RXP.mak
include $(TOP)/config/modules/MACOSX_AUDIO.mak