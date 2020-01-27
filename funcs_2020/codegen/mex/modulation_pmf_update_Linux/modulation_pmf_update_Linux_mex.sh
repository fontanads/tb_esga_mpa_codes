MATLAB="/usr/local/MATLAB/R2018a"
Arch=glnxa64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/home/fontanads/.matlab/R2018a"
OPTSFILE_NAME="./setEnv.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for modulation_pmf_update_Linux" > modulation_pmf_update_Linux_mex.mki
echo "CC=$CC" >> modulation_pmf_update_Linux_mex.mki
echo "CFLAGS=$CFLAGS" >> modulation_pmf_update_Linux_mex.mki
echo "CLIBS=$CLIBS" >> modulation_pmf_update_Linux_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> modulation_pmf_update_Linux_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> modulation_pmf_update_Linux_mex.mki
echo "CXX=$CXX" >> modulation_pmf_update_Linux_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> modulation_pmf_update_Linux_mex.mki
echo "CXXLIBS=$CXXLIBS" >> modulation_pmf_update_Linux_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> modulation_pmf_update_Linux_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> modulation_pmf_update_Linux_mex.mki
echo "LDFLAGS=$LDFLAGS" >> modulation_pmf_update_Linux_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> modulation_pmf_update_Linux_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> modulation_pmf_update_Linux_mex.mki
echo "Arch=$Arch" >> modulation_pmf_update_Linux_mex.mki
echo "LD=$LD" >> modulation_pmf_update_Linux_mex.mki
echo OMPFLAGS= >> modulation_pmf_update_Linux_mex.mki
echo OMPLINKFLAGS= >> modulation_pmf_update_Linux_mex.mki
echo "EMC_COMPILER=gcc" >> modulation_pmf_update_Linux_mex.mki
echo "EMC_CONFIG=optim" >> modulation_pmf_update_Linux_mex.mki
"/usr/local/MATLAB/R2018a/bin/glnxa64/gmake" -j 1 -B -f modulation_pmf_update_Linux_mex.mk
