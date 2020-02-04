MATLAB="/usr/local/MATLAB/R2018a"
Arch=glnxa64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/home/fontanads/.matlab/R2018a"
OPTSFILE_NAME="./setEnv.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for uplink_SCMA_Linux" > uplink_SCMA_Linux_mex.mki
echo "CC=$CC" >> uplink_SCMA_Linux_mex.mki
echo "CFLAGS=$CFLAGS" >> uplink_SCMA_Linux_mex.mki
echo "CLIBS=$CLIBS" >> uplink_SCMA_Linux_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> uplink_SCMA_Linux_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> uplink_SCMA_Linux_mex.mki
echo "CXX=$CXX" >> uplink_SCMA_Linux_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> uplink_SCMA_Linux_mex.mki
echo "CXXLIBS=$CXXLIBS" >> uplink_SCMA_Linux_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> uplink_SCMA_Linux_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> uplink_SCMA_Linux_mex.mki
echo "LDFLAGS=$LDFLAGS" >> uplink_SCMA_Linux_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> uplink_SCMA_Linux_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> uplink_SCMA_Linux_mex.mki
echo "Arch=$Arch" >> uplink_SCMA_Linux_mex.mki
echo "LD=$LD" >> uplink_SCMA_Linux_mex.mki
echo OMPFLAGS= >> uplink_SCMA_Linux_mex.mki
echo OMPLINKFLAGS= >> uplink_SCMA_Linux_mex.mki
echo "EMC_COMPILER=gcc" >> uplink_SCMA_Linux_mex.mki
echo "EMC_CONFIG=optim" >> uplink_SCMA_Linux_mex.mki
"/usr/local/MATLAB/R2018a/bin/glnxa64/gmake" -j 1 -B -f uplink_SCMA_Linux_mex.mk
