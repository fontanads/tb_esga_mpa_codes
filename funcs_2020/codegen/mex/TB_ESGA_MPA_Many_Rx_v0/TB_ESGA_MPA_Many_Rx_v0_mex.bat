@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2018a
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2018a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=TB_ESGA_MPA_Many_Rx_v0_mex
set MEX_NAME=TB_ESGA_MPA_Many_Rx_v0_mex
set MEX_EXT=.mexw64
call "C:\PROGRA~1\MATLAB\R2018a\sys\lcc64\lcc64\mex\lcc64opts.bat"
echo # Make settings for TB_ESGA_MPA_Many_Rx_v0 > TB_ESGA_MPA_Many_Rx_v0_mex.mki
echo COMPILER=%COMPILER%>> TB_ESGA_MPA_Many_Rx_v0_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> TB_ESGA_MPA_Many_Rx_v0_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> TB_ESGA_MPA_Many_Rx_v0_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> TB_ESGA_MPA_Many_Rx_v0_mex.mki
echo LINKER=%LINKER%>> TB_ESGA_MPA_Many_Rx_v0_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> TB_ESGA_MPA_Many_Rx_v0_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> TB_ESGA_MPA_Many_Rx_v0_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> TB_ESGA_MPA_Many_Rx_v0_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> TB_ESGA_MPA_Many_Rx_v0_mex.mki
echo OMPFLAGS= >> TB_ESGA_MPA_Many_Rx_v0_mex.mki
echo OMPLINKFLAGS= >> TB_ESGA_MPA_Many_Rx_v0_mex.mki
echo EMC_COMPILER=lcc64>> TB_ESGA_MPA_Many_Rx_v0_mex.mki
echo EMC_CONFIG=optim>> TB_ESGA_MPA_Many_Rx_v0_mex.mki
"C:\Program Files\MATLAB\R2018a\bin\win64\gmake" -j 1 -B -f TB_ESGA_MPA_Many_Rx_v0_mex.mk
