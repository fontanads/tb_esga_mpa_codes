START_DIR = C:\Users\BRUNOF~1\Dropbox\MATLAB\SC05F9~1\FUNCS_~1

MATLAB_ROOT = C:\PROGRA~1\MATLAB\R2018a
MAKEFILE = TB_ESGA_MPA_Many_Rx_v0_mex.mk

include TB_ESGA_MPA_Many_Rx_v0_mex.mki


SRC_FILES =  \
	TB_ESGA_MPA_Many_Rx_v0_data.c \
	TB_ESGA_MPA_Many_Rx_v0_initialize.c \
	TB_ESGA_MPA_Many_Rx_v0_terminate.c \
	TB_ESGA_MPA_Many_Rx_v0.c \
	log2.c \
	error.c \
	rdivide.c \
	eml_int_forloop_overflow_check.c \
	eml_setop.c \
	issorted.c \
	squeeze.c \
	scalexpAlloc.c \
	sqrt.c \
	prod.c \
	indexShapeCheck.c \
	sum.c \
	mod.c \
	_coder_TB_ESGA_MPA_Many_Rx_v0_info.c \
	_coder_TB_ESGA_MPA_Many_Rx_v0_api.c \
	_coder_TB_ESGA_MPA_Many_Rx_v0_mex.c \
	TB_ESGA_MPA_Many_Rx_v0_emxutil.c \
	c_mexapi_version.c

MEX_FILE_NAME_WO_EXT = TB_ESGA_MPA_Many_Rx_v0_mex
MEX_FILE_NAME = $(MEX_FILE_NAME_WO_EXT).mexw64
TARGET = $(MEX_FILE_NAME)

SYS_LIBS = 


#
#====================================================================
# gmake makefile fragment for building MEX functions using LCC
# Copyright 2007-2016 The MathWorks, Inc.
#====================================================================
#
SHELL = cmd
OBJEXT = obj
CC = $(COMPILER)
LD = $(LINKER)
.SUFFIXES: .$(OBJEXT)

OBJLIST += $(SRC_FILES:.c=.$(OBJEXT))
MEXSTUB = $(MEX_FILE_NAME_WO_EXT)2.$(OBJEXT)
LCCSTUB = $(MEX_FILE_NAME_WO_EXT)_lccstub.$(OBJEXT)

target: $(TARGET)

ML_INCLUDES = -I"$(MATLAB_ROOT)\simulink\include"
ML_INCLUDES+= -I"$(MATLAB_ROOT)\toolbox\shared\simtargets"
SYS_INCLUDE = $(ML_INCLUDES)

LCC_ROOT = $(MATLAB_ROOT)\sys\lcc64\lcc64

# Additional includes

SYS_INCLUDE += -I"$(START_DIR)\codegen\mex\TB_ESGA_MPA_Many_Rx_v0"
SYS_INCLUDE += -I"$(START_DIR)"
SYS_INCLUDE += -I".\interface"
SYS_INCLUDE += -I"$(MATLAB_ROOT)\extern\include"
SYS_INCLUDE += -I"."

EML_LIBS = libemlrt.lib libcovrt.lib libut.lib libmwmathutil.lib
SYS_LIBS += $(EML_LIBS)

DIRECTIVES = $(MEX_FILE_NAME_WO_EXT)_mex.def

COMP_FLAGS = $(COMPFLAGS)
LINK_FLAGS0= $(subst $(MEXSTUB),$(LCCSTUB),$(LINKFLAGS))
LINK_FLAGS = $(filter-out "mexFunction.def", $(LINK_FLAGS0))


ifeq ($(EMC_CONFIG),optim)
  COMP_FLAGS += $(OPTIMFLAGS)
  LINK_FLAGS += $(LINKOPTIMFLAGS)
else
  COMP_FLAGS += $(DEBUGFLAGS)
  LINK_FLAGS += $(LINKDEBUGFLAGS)
endif
LINK_FLAGS += -o $(TARGET)
LINK_FLAGS += 

CFLAGS = $(COMP_FLAGS)   $(USER_INCLUDE) $(SYS_INCLUDE)

%.$(OBJEXT) : %.c
	$(CC) $(CFLAGS) "$<"

# Additional sources

%.$(OBJEXT) : $(START_DIR)/%.c
	$(CC) -Fo"$@" $(CFLAGS) "$<"

%.$(OBJEXT) : $(START_DIR)\codegen\mex\TB_ESGA_MPA_Many_Rx_v0/%.c
	$(CC) -Fo"$@" $(CFLAGS) "$<"

%.$(OBJEXT) : interface/%.c
	$(CC) -Fo"$@" $(CFLAGS) "$<"



$(LCCSTUB) : $(LCC_ROOT)\mex\lccstub.c
	$(CC) -Fo$(LCCSTUB) $(CFLAGS) "$<"

$(TARGET): $(OBJLIST) $(LCCSTUB) $(MAKEFILE) $(DIRECTIVES)
	$(LD) $(OBJLIST) $(LINK_FLAGS) $(LINKFLAGSPOST) $(SYS_LIBS) $(DIRECTIVES)
	@cmd /C "echo Build completed using compiler $(EMC_COMPILER)"

#====================================================================

