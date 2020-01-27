@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2018a
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2018a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=uplink_SCMA_mex
set MEX_NAME=uplink_SCMA_mex
set MEX_EXT=.mexw64
call "C:\PROGRA~1\MATLAB\R2018a\sys\lcc64\lcc64\mex\lcc64opts.bat"
echo # Make settings for uplink_SCMA > uplink_SCMA_mex.mki
echo COMPILER=%COMPILER%>> uplink_SCMA_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> uplink_SCMA_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> uplink_SCMA_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> uplink_SCMA_mex.mki
echo LINKER=%LINKER%>> uplink_SCMA_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> uplink_SCMA_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> uplink_SCMA_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> uplink_SCMA_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> uplink_SCMA_mex.mki
echo OMPFLAGS= >> uplink_SCMA_mex.mki
echo OMPLINKFLAGS= >> uplink_SCMA_mex.mki
echo EMC_COMPILER=lcc64>> uplink_SCMA_mex.mki
echo EMC_CONFIG=optim>> uplink_SCMA_mex.mki
"C:\Program Files\MATLAB\R2018a\bin\win64\gmake" -j 1 -B -f uplink_SCMA_mex.mk
