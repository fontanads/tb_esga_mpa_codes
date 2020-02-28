MATLAB="/usr/local/MATLAB/R2018a"
Arch=glnxa64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/home/fontanads/.matlab/R2018a"
OPTSFILE_NAME="./setEnv.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for TB_ESGA_MPA_v1_Linux" > TB_ESGA_MPA_v1_Linux_mex.mki
echo "CC=$CC" >> TB_ESGA_MPA_v1_Linux_mex.mki
echo "CFLAGS=$CFLAGS" >> TB_ESGA_MPA_v1_Linux_mex.mki
echo "CLIBS=$CLIBS" >> TB_ESGA_MPA_v1_Linux_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> TB_ESGA_MPA_v1_Linux_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> TB_ESGA_MPA_v1_Linux_mex.mki
echo "CXX=$CXX" >> TB_ESGA_MPA_v1_Linux_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> TB_ESGA_MPA_v1_Linux_mex.mki
echo "CXXLIBS=$CXXLIBS" >> TB_ESGA_MPA_v1_Linux_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> TB_ESGA_MPA_v1_Linux_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> TB_ESGA_MPA_v1_Linux_mex.mki
echo "LDFLAGS=$LDFLAGS" >> TB_ESGA_MPA_v1_Linux_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> TB_ESGA_MPA_v1_Linux_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> TB_ESGA_MPA_v1_Linux_mex.mki
echo "Arch=$Arch" >> TB_ESGA_MPA_v1_Linux_mex.mki
echo "LD=$LD" >> TB_ESGA_MPA_v1_Linux_mex.mki
echo OMPFLAGS= >> TB_ESGA_MPA_v1_Linux_mex.mki
echo OMPLINKFLAGS= >> TB_ESGA_MPA_v1_Linux_mex.mki
echo "EMC_COMPILER=gcc" >> TB_ESGA_MPA_v1_Linux_mex.mki
echo "EMC_CONFIG=optim" >> TB_ESGA_MPA_v1_Linux_mex.mki
"/usr/local/MATLAB/R2018a/bin/glnxa64/gmake" -j 1 -B -f TB_ESGA_MPA_v1_Linux_mex.mk
