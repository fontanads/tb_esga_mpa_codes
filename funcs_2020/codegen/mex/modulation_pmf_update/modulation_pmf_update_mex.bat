@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2018a
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2018a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=modulation_pmf_update_mex
set MEX_NAME=modulation_pmf_update_mex
set MEX_EXT=.mexw64
call "C:\PROGRA~1\MATLAB\R2018a\sys\lcc64\lcc64\mex\lcc64opts.bat"
echo # Make settings for modulation_pmf_update > modulation_pmf_update_mex.mki
echo COMPILER=%COMPILER%>> modulation_pmf_update_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> modulation_pmf_update_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> modulation_pmf_update_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> modulation_pmf_update_mex.mki
echo LINKER=%LINKER%>> modulation_pmf_update_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> modulation_pmf_update_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> modulation_pmf_update_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> modulation_pmf_update_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> modulation_pmf_update_mex.mki
echo OMPFLAGS= >> modulation_pmf_update_mex.mki
echo OMPLINKFLAGS= >> modulation_pmf_update_mex.mki
echo EMC_COMPILER=lcc64>> modulation_pmf_update_mex.mki
echo EMC_CONFIG=optim>> modulation_pmf_update_mex.mki
"C:\Program Files\MATLAB\R2018a\bin\win64\gmake" -j 1 -B -f modulation_pmf_update_mex.mk
